/* Test the `vuzpQu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vuzpQu32 (void)
{
  uint32x4x2_t out_uint32x4x2_t;
  uint32x4_t arg0_uint32x4_t;
  uint32x4_t arg1_uint32x4_t;

  out_uint32x4x2_t = vuzpq_u32 (arg0_uint32x4_t, arg1_uint32x4_t);
}

/* { dg-final { scan-assembler "vuzp\.32\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
