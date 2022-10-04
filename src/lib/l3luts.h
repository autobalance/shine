#ifndef L3LUTS_H
#define L3LUTS_H

#include "types.h"

#ifdef USE_CONST_L3LOOP_LUT
extern const double l3loop_steptab[128];
extern const int32_t l3loop_steptabi[128];
extern const int l3loop_int2idx[10000];
#endif

#ifdef USE_CONST_MDCT_LUT
extern const int32_t mdct_cos_l[18][36];
#endif

#ifdef USE_CONST_SUBBAND_LUT
extern const int32_t subband_fl[SBLIMIT][64];
#endif

#endif
