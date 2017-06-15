/*
 * MATLAB Compiler: 6.1 (R2015b)
 * Date: Thu Jun 15 16:12:35 2017
 * Arguments: "-B" "macro_default" "-W" "lib:myFuncdll" "-T" "link:lib"
 * "myFunc.m" 
 */

#ifndef __myFuncdll_h
#define __myFuncdll_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
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

#ifdef EXPORTING_myFuncdll
#define PUBLIC_myFuncdll_C_API __global
#else
#define PUBLIC_myFuncdll_C_API /* No import statement needed. */
#endif

#define LIB_myFuncdll_C_API PUBLIC_myFuncdll_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_myFuncdll
#define PUBLIC_myFuncdll_C_API __declspec(dllexport)
#else
#define PUBLIC_myFuncdll_C_API __declspec(dllimport)
#endif

#define LIB_myFuncdll_C_API PUBLIC_myFuncdll_C_API


#else

#define LIB_myFuncdll_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_myFuncdll_C_API 
#define LIB_myFuncdll_C_API /* No special import/export declaration */
#endif

extern LIB_myFuncdll_C_API 
bool MW_CALL_CONV myFuncdllInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_myFuncdll_C_API 
bool MW_CALL_CONV myFuncdllInitialize(void);

extern LIB_myFuncdll_C_API 
void MW_CALL_CONV myFuncdllTerminate(void);



extern LIB_myFuncdll_C_API 
void MW_CALL_CONV myFuncdllPrintStackTrace(void);

extern LIB_myFuncdll_C_API 
bool MW_CALL_CONV mlxMyFunc(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);



extern LIB_myFuncdll_C_API bool MW_CALL_CONV mlfMyFunc(int nargout, mxArray** y);

#ifdef __cplusplus
}
#endif
#endif
