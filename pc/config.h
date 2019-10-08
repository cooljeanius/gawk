/* configh.in.  Generated from configure.ac by autoheader.  */
/* pc/config.h.  Generated automatically by pc/config.sed.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* The normal alignment of `unsigned int', in bytes. */
#undef ALIGNOF_UNSIGNED_INT

/* The normal alignment of `unsigned long', in bytes. */
#undef ALIGNOF_UNSIGNED_LONG

/* FIXME/TODO: instead of using this hackish define, just find libhistory
   properly instead */
#undef CAN_USE_HISTORY_LIST

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
#undef C_ALLOCA

/* dynamic loading is possible */
#undef DYNAMIC

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define GETPGRP_VOID 1

/* Define to 1 if you have the `alarm' function. */
#define HAVE_ALARM 1

/* Define to 1 if you have `alloca', as a function or macro. */
#undef HAVE_ALLOCA

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the <argz.h> header file. */
#undef HAVE_ARGZ_H

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have the <assert.h> header file. */
#undef HAVE_ASSERT_H

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the `btowc' function. */
#ifdef _WIN32
#define HAVE_BTOWC 1
#endif

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYCURRENT

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#undef HAVE_CFPREFERENCESCOPYAPPVALUE

/* Define to 1 if you have the <ctype.h> header file. */
#undef HAVE_CTYPE_H

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT

/* Define to 1 if you have the declaration of `struct lconv', and to 0 if you
   don't. */
#undef HAVE_DECL_STRUCT_LCONV

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#ifdef __MINGW32__
#define HAVE_DECL_TZNAME 1
#endif

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT

/* Define to 1 if you have the `dup2' function. */
#undef HAVE_DUP2

/* Define to 1 if you have the `endgrent' function. */
#undef HAVE_ENDGRENT

/* Define to 1 if you have the `endpwent' function. */
#undef HAVE_ENDPWENT

/* Define to 1 if you have the <errno.h> header file. */
#undef HAVE_ERRNO_H

/* Define to 1 if you have the `estrdup' function. */
#undef HAVE_ESTRDUP

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <file.h> header file. */
#undef HAVE_FILE_H

/* Define to 1 if you have the <float.h> header file. */
#undef HAVE_FLOAT_H

/* Define to 1 if you have the `floor' function. */
#undef HAVE_FLOOR

/* Define to 1 if you have the `fmod' function. */
#define HAVE_FMOD 1

/* Define to 1 if you have the `fork' function. */
#undef HAVE_FORK

/* Define to 1 if you have the `format_tree' function. */
#undef HAVE_FORMAT_TREE

/* Define to 1 if you have the `format_val' function. */
#undef HAVE_FORMAT_VAL

/* Define to 1 if you have the `free' function. */
#undef HAVE_FREE

/* have getaddrinfo */
#undef HAVE_GETADDRINFO

/* Define to 1 if you have the `getcwd' function. */
#undef HAVE_GETCWD

/* Define to 1 if you have the `getgrent' function. */
#undef HAVE_GETGRENT

/* Define to 1 if you have the `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `gethostbyname' function. */
#undef HAVE_GETHOSTBYNAME

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the `getwd' function. */
#undef HAVE_GETWD

/* Define to 1 if you have the `grantpt' function. */
#undef HAVE_GRANTPT

/* Define if you have the iconv() function and it works. */
#undef HAVE_ICONV

/* Define to 1 if you have the `init_locale' function. */
#undef HAVE_INIT_LOCALE

/* Define to 1 if the system has the type `intmax_t'. */
#ifdef __MINGW32__
#define HAVE_INTMAX_T 1
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifdef __MINGW32__
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the `isascii' function. */
#ifdef __MINGW32__
#define HAVE_ISASCII 1
#endif

/* Define to 1 if you have the `isnondecimal' function. */
#undef HAVE_ISNONDECIMAL

/* Define to 1 if you have the `iswctype' function. */
#ifdef __MINGW32__
#define HAVE_ISWCTYPE 1
#endif

/* Define to 1 if you have the `iswlower' function. */
#ifdef __MINGW32__
#define HAVE_ISWLOWER 1
#endif

/* Define to 1 if you have the `iswupper' function. */
#ifdef __MINGW32__
#define HAVE_ISWUPPER 1
#endif

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#undef HAVE_LANGINFO_CODESET

/* Define to 1 if you have the <langinfo.h> header file. */
#undef HAVE_LANGINFO_H

/* Define to 1 if you have the `lconv' function. */
#undef HAVE_LCONV

/* Define if your <locale.h> file defines LC_MESSAGES. */
#undef HAVE_LC_MESSAGES

/* Define to 1 if you have the `bsd' library (-lbsd). */
#undef HAVE_LIBBSD

/* Define to 1 if you have the `efence' library (-lefence). */
#undef HAVE_LIBEFENCE

/* Define to 1 if you have the `history' library (-lhistory). */
#undef HAVE_LIBHISTORY

/* Define to 1 if you have the <libintl.h> header file. */
#undef HAVE_LIBINTL_H

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `msvcp60' library (-lmsvcp60). */
#undef HAVE_LIBMSVCP60

/* Define to 1 if you have a fully functional readline library. */
/* #undef HAVE_LIBREADLINE */

/* Define if you have the libsigsegv library. */
#undef HAVE_LIBSIGSEGV

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `localeconv' function. */
#undef HAVE_LOCALECONV

/* Define to 1 if you have the <locale.h> header file. */
#ifdef __MINGW32__
#define HAVE_LOCALE_H 1
#endif

/* Define to 1 if the system has the type 'long long int'. */
#undef HAVE_LONG_LONG_INT

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#undef HAVE_MALLOC

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <malloc/malloc.h> header file. */
#undef HAVE_MALLOC_MALLOC_H

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H

/* Define to 1 if you have the `mblen' function. */
#undef HAVE_MBLEN

/* Define to 1 if you have the `mbrlen' function. */
#ifdef __MINGW32__
#define HAVE_MBRLEN 1
#endif

/* Define to 1 if mbrtowc and mbstate_t are properly declared. */
#ifdef __MINGW32__
#define HAVE_MBRTOWC 1
#endif

/* Define to 1 if you have the <mcheck.h> header file. */
#undef HAVE_MCHECK_H

/* Define to 1 if you have the `memchr' function. */
#undef HAVE_MEMCHR

/* Define to 1 if you have the `memcmp' function. */
#define HAVE_MEMCMP 1

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the `memcpy_ulong' function. */
#undef HAVE_MEMCPY_ULONG

/* Define to 1 if you have the `memmove' function. */
#ifdef __MINGW32__
#define HAVE_MEMMOVE 1
#endif

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mempcpy' function. */
#undef HAVE_MEMPCPY

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the `memset_ulong' function. */
#undef HAVE_MEMSET_ULONG

/* Define to 1 if you have the `mkstemp' function. */
#ifdef __DJGPP__
#define HAVE_MKSTEMP 1
#endif

/* we have the mktime function */
#define HAVE_MKTIME 1

/* Define to 1 if you have a working `mmap' system call. */
#undef HAVE_MMAP

/* Define to 1 if you have the `modf' function. */
#undef HAVE_MODF

/* Define to 1 if you have the `munmap' function. */
#undef HAVE_MUNMAP

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the `nl_langinfo' function. */
#undef HAVE_NL_LANGINFO

/* Define to 1 if you have the `posix_openpt' function. */
#undef HAVE_POSIX_OPENPT

/* Define to 1 if you have the `pow' function. */
#undef HAVE_POW

/* Define to 1 if you have the `printf' function. */
#undef HAVE_PRINTF

/* Define to 1 if the system has the type `ptrdiff_t'. */
#undef HAVE_PTRDIFF_T

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#undef HAVE_REALLOC

/* Define to 1 if you have the `regcomp' function. */
#undef HAVE_REGCOMP

/* Define to 1 if you have the `re_comp' function. */
#undef HAVE_RE_COMP

/* Define to 1 if you have the `scanf' function. */
#undef HAVE_SCANF

/* Define to 1 if you have the `setenv' function. */
#if defined(__MINGW32__) || defined(__DJGPP__)
#define HAVE_SETENV 1
#endif

/* Define to 1 if you have the <setjmp.h> header file. */
#undef HAVE_SETJMP_H

/* Define to 1 if you have the `setlocale' function. */
#ifdef __MINGW32__
#define HAVE_SETLOCALE 1
#endif

/* Define to 1 if you have the `setsid' function. */
#undef HAVE_SETSID

/* Define to 1 if you have the <signal.h> header file. */
#undef HAVE_SIGNAL_H

/* Define to 1 if you have the <sigsegv.h> header file. */
#undef HAVE_SIGSEGV_H

/* Define to 1 if you have the `snprintf' function. */
#ifdef __MINGW32__
#define HAVE_SNPRINTF 1
#endif

/* newer systems define this type here */
#undef HAVE_SOCKADDR_STORAGE

/* Define to 1 if you have the `socket' function. */
#undef HAVE_SOCKET

/* we have sockets on this system */
#undef HAVE_SOCKETS

/* Define to 1 if you have the `sqrt' function. */
#undef HAVE_SQRT

/* Define to 1 if you have the <stat.h> header file. */
#undef HAVE_STAT_H

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdbool.h> header file. */
#undef HAVE_STDBOOL_H

/* Define to 1 if you have the <stddef.h> header file. */
#ifdef __GNUC__
#define HAVE_STDDEF_H 1
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifdef __MINGW32__
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdio_ext.h> header file. */
#undef HAVE_STDIO_EXT_H

/* Define to 1 if you have the <stdio.h> header file. */
#undef HAVE_STDIO_H

/* Define to 1 if you have the <stdlib.h> header file. */
#ifdef __MINGW32__
#define HAVE_STDLIB_H 1
#endif

/* Define to 1 if you have the `stpcpy' function. */
#undef HAVE_STPCPY

/* Define to 1 if you have the `strcasecmp' function. */
#undef HAVE_STRCASECMP

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strcoll' function. */
#undef HAVE_STRCOLL

/* Define to 1 if you have the `strcspn' function. */
#undef HAVE_STRCSPN

/* Define to 1 if you have the `strdup' function. */
#undef HAVE_STRDUP

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#ifdef __MINGW32__
/* MinGW uses the replacement from missing_d, to support the %e specifier.  */
#define strftime rpl_strftime
#else
#define HAVE_STRFTIME 1
#endif

/* Define to 1 if cpp supports the ANSI # stringizing operator. */
#define HAVE_STRINGIZE 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlen' function. */
#undef HAVE_STRLEN

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1
#ifdef __EMX__
#define strncasecmp strnicmp
#endif

/* Define to 1 if you have the <stropts.h> header file. */
#undef HAVE_STROPTS_H

/* Define to 1 if you have the `strrchr' function. */
#undef HAVE_STRRCHR

/* Define to 1 if you have the `strstr' function. */
#undef HAVE_STRSTR

/* Define to 1 if you have the `strtol' function. */
#undef HAVE_STRTOL

/* Define to 1 if you have the `strtoul' function. */
#ifdef __MINGW32__
#define HAVE_STRTOUL 1
#endif

/* Define to 1 if `d_ino' is a member of `struct dirent'. */
#undef HAVE_STRUCT_DIRENT_D_INO

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#undef HAVE_STRUCT_DIRENT_D_TYPE

/* Define to 1 if the system has the type `struct lconv'. */
#undef HAVE_STRUCT_LCONV

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
#undef HAVE_STRUCT_LCONV_DECIMAL_POINT

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BLKSIZE

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BLOCKS

/* Define to 1 if `st_rdev' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_RDEV

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_ZONE

/* Define to 1 if your `struct stat' has `st_blksize'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLKSIZE' instead. */
#undef HAVE_ST_BLKSIZE

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#undef HAVE_ST_BLOCKS

/* Define to 1 if you have the `system' function. */
#define HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define to 1 if you have the <sys/param.h> header file. */
#ifndef __MINGW32__
#define HAVE_SYS_PARAM_H 1
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifdef __MINGW32__
#define HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#if defined(__DJGPP__) || defined(__MINGW32__)
#define HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the <time.h> header file. */
#undef HAVE_TIME_H

/* Define to 1 if you have the `tmpfile' function. */
#undef HAVE_TMPFILE

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#undef HAVE_TM_ZONE

/* Define to 1 if you have the `towlower' function. */
#ifdef __MINGW32__
#define HAVE_TOWLOWER 1
#endif

/* Define to 1 if you have the `towupper' function. */
#ifdef __MINGW32__
#define HAVE_TOWUPPER 1
#endif

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#define HAVE_TZNAME 1

/* Define to 1 if you have the `tzset' function. */
#define HAVE_TZSET 1

/* Define to 1 if the system has the type `uintmax_t'. */
#if defined(__DJGPP__) || defined(__MINGW32__)
#define HAVE_UINTMAX_T 1
#ifdef __DJGPP__
#define uintmax_t unsigned long long
#endif
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#if defined(__DJGPP__) || defined(__MINGW32__)
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the <unixlib.h> header file. */
#undef HAVE_UNIXLIB_H

/* Define to 1 if the system has the type `unsigned long long int'. */
#undef HAVE_UNSIGNED_LONG_LONG_INT

/* Define to 1 if you have the `usleep' function. */
#if defined(__DJGPP__) || defined(__MINGW32__)
#define HAVE_USLEEP 1
#endif

/* Define to 1 if you have the `vfork' function. */
#undef HAVE_VFORK

/* Define to 1 if you have the <vfork.h> header file. */
#undef HAVE_VFORK_H

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#ifdef __MINGW32__
#define HAVE_WCHAR_H 1
#endif

/* Define to 1 if you have the `wcrtomb' function. */
#ifdef __MINGW32__
#define HAVE_WCRTOMB 1
#endif

/* Define to 1 if you have the `wcscoll' function. */
#ifdef __MINGW32__
#define HAVE_WCSCOLL 1
#endif

/* Define to 1 if you have the `wctype' function. */
#ifdef __MINGW32__
#define HAVE_WCTYPE 1
#endif

/* Define to 1 if you have the <wctype.h> header file. */
#ifdef __MINGW32__
#define HAVE_WCTYPE_H 1
#endif

/* systems should define this type here */
#ifdef __MINGW32__
#define HAVE_WCTYPE_T 1
#endif

/* systems should define this type here */
#ifdef __MINGW32__
#define HAVE_WINT_T 1
#endif

/* Define to 1 if `fork' works. */
#undef HAVE_WORKING_FORK

/* Define to 1 if `vfork' works. */
#undef HAVE_WORKING_VFORK

/* Define to 1 if the system has the type `_Bool'. */
#undef HAVE__BOOL

/* Define to 1 if you have the `__argz_count' function. */
#undef HAVE___ARGZ_COUNT

/* Define to 1 if you have the `__argz_next' function. */
#undef HAVE___ARGZ_NEXT

/* Define to 1 if you have the `__argz_stringify' function. */
#undef HAVE___ARGZ_STRINGIFY

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Define to 1 if `major', `minor', and `makedev' are declared in <mkdev.h>.
   */
#undef MAJOR_IN_MKDEV

/* Define to 1 if `major', `minor', and `makedev' are declared in
   <sysmacros.h>. */
#undef MAJOR_IN_SYSMACROS

/* disable lint checks */
#undef NO_LINT

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Name of package */
#define PACKAGE "gawk"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gawk@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GNU Awk"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GNU Awk 4.0.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gawk"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.gnu.org/software/gawk/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.2"

/* Define to 1 if *printf supports %F format */
#undef PRINTF_HAS_F_FORMAT

/* Define to 1 if the C compiler supports function prototypes. */
#define PROTOTYPES 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

#if defined(__DJGPP__) || defined(__MINGW32__)
#include <limits.h>
#endif

/* The size of `unsigned int', as computed by sizeof. */
#if UINT_MAX == 65536
#define SIZEOF_UNSIGNED_INT 2
#elif UINT_MAX == 4294967295U
#define SIZEOF_UNSIGNED_INT 4
#endif

/* The size of `unsigned long', as computed by sizeof. */
#if ULONG_MAX == 4294967295UL
#define SIZEOF_UNSIGNED_LONG 4
#endif

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* some systems define this type here */
#undef TIME_T_IN_SYS_TYPES_H

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* force use of our version of strftime */
#undef USE_INCLUDED_STRFTIME

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#define VERSION "4.0.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* Define to 1 if on MINIX. */
#undef _MINIX

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#undef _POSIX_SOURCE

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
#undef _UINT32_T

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
#undef _UINT64_T

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
#undef _UINT8_T

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Define like PROTOTYPES; this can be used by system headers. */
#undef __PROTOTYPES

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#ifdef __GNUC__
#define inline __inline__
#endif
#endif

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
#undef int16_t

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef int32_t

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef int64_t

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
#undef int8_t

/* Define to the widest signed integer type if <stdint.h> and <inttypes.h> do
   not define. */
#ifdef __DJGPP__
#define intmax_t long long
#endif

/* Define to rpl_malloc if the replacement function should be used. */
#undef malloc

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to rpl_realloc if the replacement function should be used. */
#undef realloc

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#ifdef __DJGPP__
#define restrict
#endif
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* type to use in place of socklen_t if not defined */
#undef socklen_t

/* Define to `int' if <sys/types.h> does not define. */
#undef ssize_t

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
#undef uint16_t

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
#undef uint32_t

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
#undef uint64_t

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
#undef uint8_t

/* Define to the widest unsigned integer type if <stdint.h> and <inttypes.h>
   do not define. */
#ifdef __DJGPP__
#define uintmax_t unsigned long long
#endif

/* Define as `fork' if `vfork' does not work. */
#undef vfork

#include "custom.h"
/* Library search path */
#if defined(__DJGPP__) && (__DJGPP__ > 2 || __DJGPP_MINOR__ >= 3)
# define DEFPATH  ".;/dev/env/DJDIR/share/awk"
#else
# define DEFPATH  ".;c:/lib/awk;c:/gnu/lib/awk"
#endif

#ifndef __DJGPP__
#define HAVE_POPEN_H 1
#endif

#if defined(__EMX__)
#define strcasecmp stricmp
#define strncasecmp strnicmp
#endif

#if defined(__MINGW32__)
# define WEXITSTATUS(stat_val)  ((stat_val) & ~0xC0000000)
#endif
