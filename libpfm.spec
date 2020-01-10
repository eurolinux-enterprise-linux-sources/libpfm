%bcond_without python
%if %{with python}
%define python_sitearch %(python -c "from distutils.sysconfig import get_python_lib; print get_python_lib(1)")
%define python_prefix %(python -c "import sys; print sys.prefix")
%{?filter_setup:
%filter_provides_in %{python_sitearch}/perfmon/.*\.so$
%filter_setup
}
%endif

Name:		libpfm
Version:	4.7.0
Release:	9%{?dist}

Summary:	Library to encode performance events for use by perf tool

Group:		System Environment/Libraries
License:	MIT
URL:		http://perfmon2.sourceforge.net/
Source0:	http://sourceforge.net/projects/perfmon2/files/libpfm4/%{name}-%{version}.tar.gz
Patch1: libpfm-updates.patch
Patch2: libpfm-rhbz1440249.patch
Patch3: libpfm-power9.patch
Patch4: libpfm-bdx_unc.patch
Patch5: libpfm-p9_alt.patch
Patch6: libpfm-p9_uniq.patch
Patch7: libpfm-intel_1port.patch

%if %{with python}
BuildRequires:	python-devel
BuildRequires:	python-setuptools-devel
BuildRequires:	swig
%endif

%description

libpfm4 is a library to help encode events for use with operating system
kernels performance monitoring interfaces. The current version provides support
for the perf_events interface available in upstream Linux kernels since v2.6.31.

%package devel
Summary:	Development library to encode performance events for perf_events based tools
Group:		Development/Libraries
Requires:	%{name}%{?_isa} = %{version}-%{release}

%description devel
Development library and header files to create performance monitoring
applications for the perf_events interface.

%package static
Summary:	Static library to encode performance events for perf_events based tools
Group:		Development/Libraries
Requires:	%{name}%{?_isa} = %{version}-%{release}

%description static
Static version of the libpfm library for performance monitoring
applications for the perf_events interface.

%if %{with python}
%package python
Summary:	Python bindings for libpfm and perf_event_open system call
Group:		Development/Languages
Requires:	%{name}%{?_isa} = %{version}-%{release}

%description python
Python bindings for libpfm4 and perf_event_open system call.
%endif

%prep
%setup -q
%patch1 -p1
%patch2 -p1
%patch3 -p1
%patch4 -p1
%patch5 -p 1 -b .p9_alt
%patch6 -p 1 -b .p9_uniq
%patch7 -p 1 -b .1port

%build
%if %{with python}
%global python_config CONFIG_PFMLIB_NOPYTHON=n
%else
%global python_config CONFIG_PFMLIB_NOPYTHON=y
%endif
make %{python_config} %{?_smp_mflags}


%install
rm -rf $RPM_BUILD_ROOT

%if %{with python}
%global python_config CONFIG_PFMLIB_NOPYTHON=n PYTHON_PREFIX=$RPM_BUILD_ROOT/%{python_prefix}
%else
%global python_config CONFIG_PFMLIB_NOPYTHON=y
%endif

make \
    PREFIX=$RPM_BUILD_ROOT%{_prefix} \
    LIBDIR=$RPM_BUILD_ROOT%{_libdir} \
    %{python_config} \
    LDCONFIG=/bin/true \
    install

%post -p /sbin/ldconfig
%postun	-p /sbin/ldconfig

%files
%doc README
%{_libdir}/lib*.so.*

%files devel
%{_includedir}/*
%{_mandir}/man3/*
%{_libdir}/lib*.so

%files static
%{_libdir}/lib*.a

%if %{with python}
%files python
%{python_sitearch}/*
%endif

%changelog
* Tue Dec 5 2017 William Cohen <wcohen@redhat.com> - 4.7.0-9
- Correct x86 unit mask naming. rhbz1521076

* Mon Dec 4 2017 William Cohen <wcohen@redhat.com> - 4.7.0-8
- Update IBM Power 9 events. rhbz1510684

* Wed Nov 29 2017 William Cohen <wcohen@redhat.com> - 4.7.0-7
- Update IBM Power 9 events. rhbz1510684

* Mon Sep 25 2017 William Cohen <wcohen@redhat.com> - 4.7.0-6
- Add access to Broadwell Uncore Counters. rhbz1474999

* Tue Jun 20 2017 William Cohen <wcohen@redhat.com> - 4.7.0-5
- Add IBM Power9 support.

* Wed Apr 12 2017 William Cohen <wcohen@redhat.com> - 4.7.0-4
- Correct handling of raw offcore umask handling. rhbz1440249

* Thu Mar 23 2017 William Cohen <wcohen@redhat.com> - 4.7.0-3
- Avoid ABI breakage caused by some Intel KNL related patches. rhbz1412950

* Tue Mar 21 2017 William Cohen <wcohen@redhat.com> - 4.7.0-2
- Updates for IBM Power and Intel KNL. rhbz1385009, rhbz1412950

* Thu May 12 2016 William Cohen <wcohen@redhat.com> - 4.7.0-1
- Rebase to libpfm-4.7.0.

* Thu Jun 4 2015 William Cohen <wcohen@redhat.com> - 4.4.0-11
- Add additional s390 support. rhbz1182187

* Fri May 15 2015 William Cohen <wcohen@redhat.com> - 4.4.0-10
- Add additional s390 support. rhbz1182187

* Thu Oct 16 2014 William Cohen <wcohen@redhat.com> - 4.4.0-9
- Bump and rebuid for chained build. rhbz1126091

* Fri Sep 26 2014 William Cohen <wcohen@redhat.com> - 4.4.0-8
- Update Intel processor support. rhbz1126091

* Wed Sep 3 2014 William Cohen <wcohen@redhat.com> - 4.4.0-7
- Add aarch64 and power8 support for rhbz963457 and rhbz1088557

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 4.4.0-6
- Mass rebuild 2014-01-24

* Tue Jan 14 2014 William Cohen <wcohen@redhat.com> - 4.4.0-5
- Update event descriptions.

* Mon Jan 13 2014 William Cohen <wcohen@redhat.com> - 4.4.0-4
- Add Haswell model numbers.

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 4.4.0-3
- Mass rebuild 2013-12-27

* Fri Jul 19 2013 William Cohen <wcohen@redhat.com> 4.4.0-2
- Add IBM power 8 support.

* Mon Jun 17 2013 William Cohen <wcohen@redhat.com> 4.4.0-1
- Rebase on libpfm-4.4.0.

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 4.3.0-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Tue Aug 28 2012 William Cohen <wcohen@redhat.com> 4.3.0-2
- Turn off LDCONFIG and remove patch.

* Tue Aug 28 2012 William Cohen <wcohen@redhat.com> 4.3.0-1
- Rebase on libpfm-4.3.0.

* Thu Jul 19 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 4.2.0-8
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Fri Jun 8 2012 William Cohen <wcohen@redhat.com> 4.2.0-7
- Eliminate swig error.

* Thu Jun 7 2012 William Cohen <wcohen@redhat.com> 4.2.0-6
- Eliminate rpm_build_root macro in build section.
- Correct location of shared library files.

* Thu Jun 7 2012 William Cohen <wcohen@redhat.com> 4.2.0-5
- Use siginfo_t for some examples.

* Mon Jun 4 2012 William Cohen <wcohen@redhat.com> 4.2.0-4
- Correct python files.

* Wed Mar 28 2012 William Cohen <wcohen@redhat.com> 4.2.0-3
- Additional spec file fixup for rhbz804666.

* Wed Mar 14 2012 William Cohen <wcohen@redhat.com> 4.2.0-2
- Some spec file fixup.

* Wed Jan 12 2011 Arun Sharma <asharma@fb.com> 4.2.0-0
Initial revision
