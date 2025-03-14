/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if the LAPACK package is available */
#define COINHSL_HAS_LAPACK 1

/* Define to 1 if MA27 is available. */
#define COINHSL_HAS_MA27 1

/* Define to 1 if MA27S is available. */
#define COINHSL_HAS_MA27S 1

/* Define to 1 if MA28 is available. */
#define COINHSL_HAS_MA28 1

/* Define to 1 if MA28S is available. */
#define COINHSL_HAS_MA28S 1

/* Define to 1 if MA57 is available. */
/* #undef COINHSL_HAS_MA57 */

/* Define to 1 if MA57S is available. */
/* #undef COINHSL_HAS_MA57S */

/* Define to 1 if MA77 is available. */
/* #undef COINHSL_HAS_MA77 */

/* Define to 1 if MA77S is available. */
/* #undef COINHSL_HAS_MA77S */

/* Define to 1 if MA86 is available. */
/* #undef COINHSL_HAS_MA86 */

/* Define to 1 if MA86S is available. */
/* #undef COINHSL_HAS_MA86S */

/* Define to 1 if MA97 is available. */
/* #undef COINHSL_HAS_MA97 */

/* Define to 1 if MA97S is available. */
/* #undef COINHSL_HAS_MA97S */

/* Define to 1 if MC19 is available. */
#define COINHSL_HAS_MC19 1

/* Define to 1 if MC19S is available. */
#define COINHSL_HAS_MC19S 1

/* Define to 1 if MC68 is available. */
/* #undef COINHSL_HAS_MC68 */

/* Define to 1 if the Metis package is available */
/* #undef COINHSL_HAS_METIS */

/* Define to a macro mangling the given C identifier (in lower and upper
   case). */
#define COINHSL_LAPACK_FUNC(name,NAME) name ## _

/* As COINHSL_LAPACK_FUNC, but for C identifiers containing underscores. */
#define COINHSL_LAPACK_FUNC_(name,NAME) name ## _

/* Version number of project */
#define COINHSL_VERSION "2.2.5"

/* Major version number of project. */
#define COINHSL_VERSION_MAJOR 2

/* Minor version number of project. */
#define COINHSL_VERSION_MINOR 2

/* Release version number of project. */
#define COINHSL_VERSION_RELEASE 5

/* Define to dummy 'main' function (if any) required to link to the Fortran
   libraries. */
/* #undef F77_DUMMY_MAIN */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define F77_FUNC(name,NAME) name ## _

/* As F77_FUNC, but for C identifiers containing underscores. */
#define F77_FUNC_(name,NAME) name ## _

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef F77_NO_MINUS_C_MINUS_O */

/* Define if F77 and FC dummy 'main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef FC_NO_MINUS_C_MINUS_O */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Library Visibility Attribute */
#define HSL_EXPORT 

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/coin-or-tools/ThirdParty-HSL/issues/new"

/* Define to the full name of this package. */
#define PACKAGE_NAME "CoinHSL"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "CoinHSL 2.2.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "coinhsl"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/coin-or-tools/ThirdParty-HSL"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.2.5"

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1
