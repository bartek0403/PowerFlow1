/*
 * File: calculate_noConv_types.h
 *
 * MATLAB Coder version            : 3.2
 * C/C++ source code generated on  : 11-May-2018 21:38:46
 */

#ifndef CALCULATE_NOCONV_TYPES_H
#define CALCULATE_NOCONV_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

#ifndef struct_emxArray_creal32_T
#define struct_emxArray_creal32_T

struct emxArray_creal32_T
{
  creal32_T *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_creal32_T*/

#ifndef typedef_emxArray_creal32_T
#define typedef_emxArray_creal32_T

typedef struct emxArray_creal32_T emxArray_creal32_T;

#endif                                 /*typedef_emxArray_creal32_T*/

#ifndef struct_emxArray_real32_T
#define struct_emxArray_real32_T

struct emxArray_real32_T
{
  float *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real32_T*/

#ifndef typedef_emxArray_real32_T
#define typedef_emxArray_real32_T

typedef struct emxArray_real32_T emxArray_real32_T;

#endif                                 /*typedef_emxArray_real32_T*/
#endif

/*
 * File trailer for calculate_noConv_types.h
 *
 * [EOF]
 */
