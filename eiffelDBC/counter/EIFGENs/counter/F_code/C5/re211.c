/*
 * Code for class reference REAL_32
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re211.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {REAL_32}.is_less */
EIF_BOOLEAN F816_5940 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTGC;
	tr1 = RTLNS(eif_new_type(816, 0x00).id, 816, _OBJSIZ_0_0_0_0_1_0_0_0_);
	*(EIF_REAL_32 *)tr1 = arg1;
	Result = F815_5910(Current, tr1);
	RTLE;
	return Result;
}

/* {REAL_32}.truncated_to_integer */
EIF_INTEGER_32 F816_5944 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_INTEGER_32) F815_5921(Current);
}

/* {REAL_32}.out */
EIF_REFERENCE F816_5963 (EIF_REFERENCE Current)
{
	GTCX
	
	
	return (EIF_REFERENCE) F815_5938(Current);
}

void EIF_Minit211 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif