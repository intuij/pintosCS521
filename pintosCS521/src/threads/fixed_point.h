/**
* fixed_point calculation macro
*/
#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

typedef int fixed_t;
/* use 16 bits to represent the fraction part */
#define frac 16

#define CONVERT_TO_FP(n) (n << frac)
#define ADD(x,n) (x + (n << frac))
#define SUB(x,n) (x - (n << frac))
#define MUL(x,y) (((int64_t) (x)) * y >> frac)
#define DIV(x,y) ((((int64_t) (x)) << frac) / y)
#define CONVERT_TO_INT_FRAC(x) (x >> frac)
#define CONVERT_TO_INT_NEAREST(x) (x >= 0 ? ((x + (1 << (frac - 1))) >> frac) \
                                  : ((x - (1 << (frac - 1))) >> frac)) 

#endif /* threads/fixed-point.h */



