/*
 * MATLAB Compiler: 6.1 (R2015b)
 * Date: Sun Apr 30 09:22:43 2017
 * Arguments: "-B" "macro_default" "-W" "lib:testdll" "-T" "link:lib" "test.m" 
 */

#ifndef __testdll_h
#define __testdll_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
//#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_testdll
#define PUBLIC_testdll_C_API __global
#else
#define PUBLIC_testdll_C_API /* No import statement needed. */
#endif

#define LIB_testdll_C_API PUBLIC_testdll_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_testdll
#define PUBLIC_testdll_C_API __declspec(dllexport)
#else
#define PUBLIC_testdll_C_API __declspec(dllimport)
#endif

#define LIB_testdll_C_API PUBLIC_testdll_C_API


#else

#define LIB_testdll_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_testdll_C_API 
#define LIB_testdll_C_API /* No special import/export declaration */
#endif

extern LIB_testdll_C_API 
bool MW_CALL_CONV testdllInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_testdll_C_API 
bool MW_CALL_CONV testdllInitialize(void);

extern LIB_testdll_C_API 
void MW_CALL_CONV testdllTerminate(void);



extern LIB_testdll_C_API 
void MW_CALL_CONV testdllPrintStackTrace(void);

extern LIB_testdll_C_API 
bool MW_CALL_CONV mlxTest(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);



extern LIB_testdll_C_API bool MW_CALL_CONV mlfTest(int nargout, mxArray** y);

#ifdef __cplusplus
}
#endif
#endif
