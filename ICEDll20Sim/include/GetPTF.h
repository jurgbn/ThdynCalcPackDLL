/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GetPTF.h
 *
 * Code generation for function 'GetPTF'
 *
 */

#ifndef __GETPTF_H__
#define __GETPTF_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "omp.h"
#include "ThdynPack_types.h"

/* Function Declarations */
extern void GetPTF(double m, double m_b, double E, double V, double T_prev,
                   double fs, double *p, double *T, double *F);

#endif

/* End of code generation (GetPTF.h) */
