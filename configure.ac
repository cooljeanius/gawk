dnl#                                               -*- Autoconf -*-
dnl#
dnl# configure.ac --- autoconf input file for gawk
dnl#
dnl# Copyright (C) 1995-2012 the Free Software Foundation, Inc.
dnl#
dnl# This file is part of GAWK, the GNU implementation of the
dnl# AWK Programming Language.
dnl#
dnl# GAWK is free software; you can redistribute it and/or modify
dnl# it under the terms of the GNU General Public License as published by
dnl# the Free Software Foundation; either version 3 of the License, or
dnl# (at your option) any later version.
dnl#
dnl# GAWK is distributed in the hope that it will be useful,
dnl# but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl# GNU General Public License for more details.
dnl#
dnl# You should have received a copy of the GNU General Public License
dnl# along with this program; if not, write to:
dnl# The Free Software Foundation, Inc.
dnl# 51 Franklin Street, Fifth Floor
dnl# Boston, MA  02110-1301, USA
dnl#

dnl# Process this file with autoconf to produce a configure script.

AC_INIT([GNU Awk],[4.0.2],[bug-gawk@gnu.org],[gawk])dnl

AC_PREREQ([2.69])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])dnl

# This is a hack. Different versions of install on different systems
# are just too different. Chuck it and use install-sh.
#
# If the user supplies ${INSTALL}, figure they know what they are doing.
#
# With Autoconf 2.5x, this needs to come very early on, but *after*
# the INIT macro. Sigh.

if test "x${INSTALL}" = "x"
then
	AC_PROG_INSTALL
	INSTALL="${srcdir}/install-sh -c"
	export INSTALL
fi

AC_CANONICAL_TARGET

AC_MSG_CHECKING([automake stuff])
AC_MSG_RESULT([ ])
AM_INIT_AUTOMAKE([1.12 dejagnu dist-xz gnu -Wall])
AM_MAINTAINER_MODE

dnl# Additional argument stuff
AC_ARG_WITH([whiny-user-strftime],
            [AS_HELP_STRING([--with-whiny-user-strftime],
                            [Force use of incl. v. of strftime for badsys])],[
	if test "x${withval}" = "xyes"
	then
		AC_DEFINE([USE_INCLUDED_STRFTIME],[1],
			  [force use of our version of strftime])
	fi
])
AC_ARG_ENABLE([lint],
              [AS_HELP_STRING([--disable-lint],[Disable gawk lint checking])],[
	if test "x${enableval}" = "xno"
	then
		AC_DEFINE([NO_LINT],[1],[disable lint checks])
	fi
])dnl

AC_USE_SYSTEM_EXTENSIONS

dnl# checks for programs
AC_MSG_CHECKING([programs])
AC_MSG_RESULT([ ])
if test "x${EGREP}" = "x"; then
	test -z "${EGREP}"
	AC_PROG_EGREP
else
	test -n "${EGREP}" && export EGREP
	AC_SUBST([EGREP])
fi
AC_PROG_YACC
AC_PROG_LN_S
if test "x${CC}" = "x"; then
	test -z "${CC}"
	AC_PROG_CC
	AC_PROG_CC_C_O
else
	test -n "${CC}" && export CC
	AC_SUBST([CC])
fi
AC_PROG_CPP
AC_PROG_CXX
AC_PATH_PROG([MV_F],[mv])
if test "x${MAKE}" = "x"; then
	test -z "${MAKE}"
	AC_PATH_PROG([MAKE],[make gmake gnumake])
	AC_PROG_MAKE_SET
	AM_SILENT_RULES
	AM_DEP_TRACK
else
	test -n "${MAKE}" && export MAKE
	AC_SUBST([MAKE])
fi

AC_OBJEXT
AC_EXEEXT

AC_MSG_CHECKING([libtool stuff])
AC_MSG_RESULT([ ])
LT_INIT
AC_MSG_NOTICE([done initializing libtool])

if test "x${RANLIB}" = "x"; then
	test -z "${RANLIB}"
	AC_PROG_RANLIB
else
	test -n "${RANLIB}" && export RANLIB
	AC_SUBST([RANLIB])
fi

# This is mainly for my use during testing and development.
# Yes, it is a bit of a hack.
AC_MSG_CHECKING([for special development options])
if test -f ${srcdir}/.developing
then
        # add other debug flags as appropriate, save GAWKDEBUG for
        # emergencies
	CFLAGS="${CFLAGS} -DARRAYDEBUG -DYYDEBUG"
	if grep dbug ${srcdir}/.developing
	then
		CFLAGS="${CFLAGS} -DDBUG"
		LIBS="${LIBS} dbug/libdbug.a"
	elif grep emergency ${srcdir}/.developing
	then
		CFLAGS="${CFLAGS} -DGAWKDEBUG"
	fi
	# turn on compiler warnings if we are doing development
	# enable debugging using macros also
	if test "x${GCC}" = "xyes"
	then
		CFLAGS="${CFLAGS} -Wall -fno-builtin -g3 -gdwarf-2"
	fi
	AC_MSG_RESULT([yes])
else
	AC_MSG_RESULT([no])
fi

AC_SUBST([CFLAGS])dnl

dnl# checks for systems
AC_MSG_CHECKING([systems])
AC_MSG_RESULT([ ])
AC_ZOS_USS
AC_SEARCH_LIBS([strerror],[cposix]) dnl# this used to be AC\_ISC\_POSIX
AC_SYS_LARGEFILE
GAWK_AC_AIX_TWEAK
GAWK_AC_LINUX_ALPHA

if test "${ISC}" = 1	# will be set by test for ISC
then
dnl#	need -D_SYSV3 for ISC
	CFLAGS="${CFLAGS} -D_SYSV3"
fi

dnl# Set the programming language for checks. Fortunately,
dnl# this only needs to be set once, since everything is in C.
AC_LANG([C])dnl
LT_LANG([C])dnl

dnl# Cygwin does not like to get libs with full paths
dnl# since that overrides linking against DLLs.
case `(uname) 2> /dev/null` in
*CYGWIN*)
	with_libiconv_prefix=no
	with_libintl_prefix=no
	;;
*)
	;;
esac

dnl# initialize GNU gettext
AC_MSG_CHECKING([gettext])
AC_MSG_RESULT([ ])
AM_GNU_GETTEXT([external])
AM_GNU_GETTEXT_VERSION([0.18.3])
AM_LANGINFO_CODESET
gt_LC_MESSAGES

# Checks for libraries.
AC_MSG_CHECKING([libraries])
AC_MSG_RESULT([ ])
# FIXME: Replace `main' with a function in `-lbsd':
AC_CHECK_LIB([bsd],[main])
AC_CHECK_LIB([efence],[efence_memalign])
AC_CHECK_LIB([history],[history_list])
if test "x${ac_cv_lib_history_history_list}" = "xno"; then
  AC_SEARCH_LIBS([history_list],[history readline c edit termcap ncurses])
elif test "x${ac_cv_lib_history_history_list}" = "xyes"; then
  AC_DEFINE([CAN_USE_HISTORY_LIST],[1],
            [FIXME/TODO: instead of using this hackish define, just find
             libhistory properly instead])
fi
LT_LIB_M
# FIXME: Replace `main' with a function in `-lmsvcp60':
AC_CHECK_LIB([msvcp60],[main])

dnl# checks for header files
AC_MSG_CHECKING([headers])
AC_MSG_RESULT([ ])
AC_HEADER_STDBOOL
AC_HEADER_SYS_WAIT
AC_HEADER_TIME
AC_CHECK_HEADERS([argz.h arpa/inet.h assert.h ctype.h errno.h fcntl.h \
        file.h float.h langinfo.h limits.h locale.h libintl.h malloc.h \
        malloc/malloc.h math.h mcheck.h netdb.h netinet/in.h setjmp.h \
        signal.h sigsegv.h stat.h stdarg.h stddef.h stdio.h stdio_ext.h \
        sys/ioctl.h sys/param.h sys/socket.h sys/time.h termios.h time.h \
        stropts.h unixlib.h wchar.h wctype.h])dnl

if test "x${ac_cv_header_inttypes_h}" = "x"
then
	test -z "${ac_cv_header_inttypes_h}"
 	AC_CHECK_HEADERS([inttypes.h])
fi

if test "x${ac_cv_header_stdbool_h}" = "x"
then
	test -z "${ac_cv_header_stdbool_h}"
	AC_CHECK_HEADERS([stdbool.h])
fi

if test "x${ac_cv_header_stdint_h}" = "x"
then
	test -z "${ac_cv_header_stdint_h}"
	AC_CHECK_HEADERS([stdint.h])
fi

if test "x${ac_cv_header_string_h}" = "xyes"
then
	AC_CHECK_HEADERS([memory.h])
else
	AC_CHECK_HEADERS([strings.h])
fi

if test "x${ac_cv_header_unistd_h}" = "x"
then
	test -z "${ac_cv_header_unistd_h}"
	AC_CHECK_HEADERS([unistd.h])
fi

AC_EGREP_HEADER([struct lconv],[locale.h])dnl

dnl# checks for typedefs 
dnl# (structs and compiler characteristics are checked for farther below)
AC_MSG_CHECKING([typedefs])
AC_MSG_RESULT([ ])
AC_TYPE_PID_T
dnl# begin what used to be AC\_TYPE\_SIGNAL
AC_CACHE_CHECK([return type of signal handlers],[ac_cv_type_signal],[AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([[#include <sys/types.h>
#include <signal.h>
]],
		 [[return *(signal (0, 0)) (0) == 1;]])],
		   [ac_cv_type_signal=int],
		   [ac_cv_type_signal=void])])
AC_DEFINE_UNQUOTED([RETSIGTYPE],[${ac_cv_type_signal}],
                   [Define as the return type of signal handlers
		    (`int' or `void').])
dnl# end what used to be AC\_TYPE\_SIGNAL
AC_TYPE_SIZE_T
AC_TYPE_GETGROUPS
AC_DEFUN([AC_REQUIRE_TYPES],[
  AC_REQUIRE([AC_TYPE_LONG_LONG_INT])dnl
  AC_REQUIRE([AC_TYPE_UNSIGNED_LONG_LONG_INT])dnl
  AC_REQUIRE([AC_TYPE_SSIZE_T])dnl
])dnl
AC_REQUIRE_TYPES
AC_TYPE_INTMAX_T
AC_TYPE_UINTMAX_T
AC_TYPE_INT8_T
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_MODE_T
AC_TYPE_OFF_T
AC_TYPE_UINT8_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_CHECK_TYPES([ptrdiff_t])
if test "x${ac_cv_type_ssize_t}" = "x"; then
  test -z "${ac_cv_type_ssize_t}"
  AC_CHECK_TYPE([ssize_t],[int])
fi
AC_CHECK_TYPES([struct lconv])
AC_CHECK_DECLS([struct lconv])
AC_CHECK_SIZEOF([unsigned int])
AC_CHECK_SIZEOF([unsigned long])
AC_CHECK_ALIGNOF([unsigned int])
AC_CHECK_ALIGNOF([unsigned long])
dnl# see if time_t is defined in <sys/types.h>
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <sys/types.h>]],[[
	time_t foo;
	foo = 0;
]])],[AC_DEFINE([TIME_T_IN_SYS_TYPES_H],[1],
		  [some systems define this type here])],[])
dnl# check for wctype_t in <wctype.h>
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <wctype.h>]],[[
	wctype_t foo;
	foo = 0;
]])],[AC_DEFINE([HAVE_WCTYPE_T],[1],[systems should define this type here])],[])
dnl# check for wint_t in <wctype.h>
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <wctype.h>]],[[
	wint_t foo;
	foo = 0;
]])],[AC_DEFINE([HAVE_WINT_T],[1],[systems should define this type here])],[])
dnl# check for sockaddr_storage
AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[#include <sys/types.h>
#include <sys/socket.h>]],[[
	struct sockaddr_storage foo;
]])],[AC_DEFINE([HAVE_SOCKADDR_STORAGE],[1],[newer systems define this type here])],[])dnl

dnl# Borrwed from rsync, thanks to to Jim Meyering.

dnl# Check for socklen_t: historically on BSD it is an int, and in
dnl# POSIX 1g it is a type of its own, but some platforms use different
dnl# types for the argument to getsockopt, getpeername, etc.  So we
dnl# have to test to find something that will work.

dnl# This is no good, because passing the wrong pointer on C compilers is
dnl# likely to only generate a warning, not an error.

AC_DEFUN([TYPE_SOCKLEN_T],
[
   AC_CHECK_TYPE([socklen_t],[],[
      AC_MSG_CHECKING([for socklen_t equivalent])
      AC_CACHE_VAL([rsync_cv_socklen_t_equiv],
      [
         # Systems have either "struct sockaddr *" or
         # "void *" as the second argument to getpeername
         rsync_cv_socklen_t_equiv=""
         for arg2 in "struct sockaddr" void; do
            for t in int size_t unsigned long "unsigned long"; do
               AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
#include <sys/types.h>
#include <sys/socket.h>

                  int getpeername (int, $arg2 *, $t *);
               ]],[[
                  $t len;
                  getpeername(0,0,&len);
               ]])],[
                  rsync_cv_socklen_t_equiv="$t"
                  break
               ],[])
            done
         done

         if test "x${rsync_cv_socklen_t_equiv}" = "x"; then
dnl#		Some systems get this. Default to int.  -- ADR
dnl#            AC_MSG_ERROR([Cannot find a type to use in place of socklen_t])
		rsync_cv_socklen_t_equiv=int
         fi
      ])
      AC_MSG_RESULT([${rsync_cv_socklen_t_equiv}])
      AC_DEFINE_UNQUOTED([socklen_t],[${rsync_cv_socklen_t_equiv}],
			[type to use in place of socklen_t if not defined])],
      [#include <sys/types.h>
#include <sys/socket.h>])
])
TYPE_SOCKLEN_T

dnl# Check for C11 _Noreturn
GAWK_AC_NORETURN

dnl# checks for functions
AC_MSG_CHECKING([functions])
AC_MSG_RESULT([ ])
AC_FUNC_ALLOCA
AC_FUNC_VPRINTF
AC_DEFUN([AC_REQUIRE_FUNCS],[
  AC_REQUIRE([AC_FUNC_MKTIME])dnl
  AC_REQUIRE([AC_FUNC_FORK])dnl
  AC_REQUIRE([AC_FUNC_MALLOC])dnl
  AC_REQUIRE([AC_FUNC_REALLOC])dnl
])dnl
AC_REQUIRE_FUNCS
AC_FUNC_ERROR_AT_LINE
AC_FUNC_GETGROUPS
AC_FUNC_LSTAT_FOLLOWS_SLASHED_SYMLINK
AC_HEADER_MAJOR
AC_FUNC_MMAP
AC_FUNC_STRCOLL
AC_FUNC_STRTOD
case "${ac_cv_func_working_mktime}" in
yes)	AC_DEFINE([HAVE_MKTIME], [1], [we have the mktime function])
	;;
esac

AC_CHECK_FUNC([getaddrinfo],
              [AC_DEFINE([HAVE_GETADDRINFO],[1],[have getaddrinfo])],
	      [AC_CHECK_LIB([socket],[getaddrinfo],
			    [AC_DEFINE([HAVE_GETADDRINFO],[1],
				       [have getaddrinfo])])])dnl

AC_CHECK_LIB([m],[fmod])
AC_CHECK_LIB([m],[isinf])
AC_CHECK_LIB([m],[ismod])
dnl# Do not look for libsigsegv on OSF/1, gives us severe headaches
case `uname` in
OSF1)	: ;;
*)
	gl_LIBSIGSEGV
	;;
esac

# Need the check for mkstemp and tmpfile for missing_d/snprintf.c.
AC_CHECK_FUNCS([__argz_count __argz_next __argz_stringify atexit btowc \
        dup2 endgrent endpwent estrdup floor fmod format_tree format_val free \
        getcwd getwd getgrent gethostbyname gettimeofday grantpt init_locale \
        isascii isnondecimal iswctype iswlower iswupper lconv localeconv \
        mblen mbrlen memchr memcmp memcpy memcpy_ulong memmove \
        mempcpy memset memset_ulong mkstemp modf munmap nl_langinfo \
        posix_openpt pow printf re_comp regcomp scanf setenv setlocale \
        setsid snprintf socket sqrt stpcpy strcasecmp strchr strcspn \
        strdup strerror strftime strlen strncasecmp strcoll strrchr \
        strstr strtol strtoul system tmpfile towlower towupper tzset \
        usleep wcrtomb wcscoll wctype])dnl

if test "x${ac_cv_func_getgroups}" = "x"; then
  test -z "${ac_cv_func_getgroups}"
  AC_CHECK_FUNCS([getgroups])
fi

dnl# this check is for both mbrtowc and the mbstate_t type, which is good
AC_FUNC_MBRTOWC

dnl# check for dynamic linking
dnl# This is known to be very primitive
unset ac_cv_header_dlfcn_h
AC_CHECK_HEADER([dlfcn.h],
	[AC_DEFINE([DYNAMIC],[1],[dynamic loading is possible])
	if test "x${GCC}" = "xyes"
	then
		# Add others here as appropriate,
		# one day use GNU libtool.
		# 3/2010: Used to have cygwin here but removed since
		# we get complaints that -export-dynamic does not work.
		if uname | ${EGREP} -i 'linux|freebsd' > /dev/null
		then
			LDFLAGS="${LDFLAGS} -export-dynamic"
		fi
	fi

	# Check this separately. Some systems have dlopen
	# in libc. Notably freebsd and cygwin.
	# HP-NSK has it in zrldsrl
	AC_SEARCH_LIBS([dlopen],[dl zrldsrl c dlcompat dyld])
])dnl

dnl# check for how to use getpgrp
dnl# have to hardwire it for VMS POSIX. Sigh.
dnl# ditto for BeOS, OS/2, and MS-DOS.
case `(uname) 2> /dev/null` in
*VMS*|*BeOS*|*OS/2*|*MS-DOS*)
	AC_DEFINE([GETPGRP_VOID],[1],
	  [Define to 1 if the getpgrp function requires zero arguments.])
	;;
*)	AC_FUNC_GETPGRP
	;;
esac

dnl# check for printf %F format
AC_MSG_CHECKING([for printf %F format])
AC_RUN_IFELSE([
AC_LANG_SOURCE([[
#include <stdio.h>

int main()
{
	char buf[[100]];

	sprintf(buf, "%F", 123.45);

	if (strcmp(buf, "123.450000") == 0)
		return 0;
	else
		return 1;
}
]])],
	[has_f_format=yes],
	[has_f_format=no],
	[has_f_format=no  dnl# Cross-compiling, assuming the worst.
])
if test "x${has_f_format}" = "xyes"; then
	AC_DEFINE([PRINTF_HAS_F_FORMAT],[1],
	          [Define to 1 if *printf supports %F format])
fi
AC_MSG_RESULT([${has_f_format}])

dnl# check for sockets
GAWK_AC_LIB_SOCKETS

dnl# check for readline support
GNUPG_CHECK_READLINE

dnl# checks for structure members
AC_MSG_CHECKING([structs])
AC_MSG_RESULT([ ])
dnl# begin obsolete thing
AC_CHECK_MEMBERS([struct stat.st_blksize],[AC_DEFINE([HAVE_ST_BLKSIZE],[1],
			    [Define to 1 if your `struct stat' has
			     `st_blksize'.  Deprecated, use
			     `HAVE_STRUCT_STAT_ST_BLKSIZE' instead.])])dnl
dnl# end obsolete thing
dnl# AC\_HEADER\_TIME is done above
AC_STRUCT_DIRENT_D_INO
AC_STRUCT_DIRENT_D_TYPE
AC_STRUCT_TM
AC_STRUCT_TIMEZONE
AC_STRUCT_ST_BLOCKS
AC_CHECK_MEMBERS([struct stat.st_rdev])
AC_CHECK_MEMBERS([struct lconv.decimal_point])dnl

dnl# checks for compiler characteristics
AC_MSG_CHECKING([compiler characteristics])
AC_MSG_RESULT([ ])
AC_C_BIGENDIAN
AC_C_CHAR_UNSIGNED
AC_C_CONST
AC_C_INLINE
AC_C_PROTOTYPES
AC_C_RESTRICT
AC_C_STRINGIZE

dnl# Output.
AC_CONFIG_HEADERS([config.h:configh.in])
AH_BOTTOM([#include "custom.h"])

AC_CONFIG_FILES([Makefile \
	awklib/Makefile \
	doc/Makefile \
	po/Makefile.in \
	test/Makefile])
AC_OUTPUT
