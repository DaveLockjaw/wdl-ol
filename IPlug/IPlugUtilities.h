#ifndef __IPLUGUTILITIES__
#define __IPLUGUTILITIES__

#include <math.h>
#include <stdio.h>

#include "IPlugConstants.h"

#ifdef WIN32
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#undef WINVER
#define WINVER 0x0501
#pragma warning(disable:4018 4267)	// size_t/signed/unsigned mismatch..
#pragma warning(disable:4800)		// if (pointer) ...
#pragma warning(disable:4805)		// Compare bool and BOOL.
#endif

#define FREE_NULL(p) {free(p);p=0;}
#define DELETE_NULL(p) {delete(p); p=0;}
#define DELETE_ARRAY(p) {delete[](p); (p)=0;}
#define IPMIN(x,y) ((x)<(y)?(x):(y))
#define IPMAX(x,y) ((x)<(y)?(y):(x))
#define BOUNDED(x,lo,hi) ((x) < (lo) ? (lo) : (x) > (hi) ? (hi) : (x))
#define CSTR_NOT_EMPTY(cStr) ((cStr) && (cStr)[0] != '\0')

#define MAKE_QUOTE(str) #str
#define MAKE_STR(str) MAKE_QUOTE(str)

#define GET_PARAM_FROM_VARARG(paramType, vp, v) \
{ \
v = 0.0; \
switch (paramType) { \
case IParam::kTypeBool: \
case IParam::kTypeInt: \
case IParam::kTypeEnum: { \
v = (double) va_arg(vp, int); \
break; \
} \
case IParam::kTypeDouble: \
default: { \
v = (double) va_arg(vp, double); \
break; \
} \
} \
}

inline double DBToAmp(double dB)
{
  return exp(IAMP_DB * dB);
}

inline double AmpToDB(double amp)
{
  return AMP_DB * log(fabs(amp));
}

void GetVersionParts(int version, int* pVer, int* pMaj, int* pMin);
int GetDecimalVersion(int version);
void GetVersionStr(int version, char* str);

#ifndef REMINDER
#if defined WIN32
// This enables: #pragma REMINDER("change this line!") with click-through from VC++.
#define REMINDER(msg) message(__FILE__   "(" MAKE_STR(__LINE__) "): " msg)
#elif defined __APPLE__
#define REMINDER(msg) WARNING msg
#endif
#endif

#endif //__IPLUGUTILITIES__
