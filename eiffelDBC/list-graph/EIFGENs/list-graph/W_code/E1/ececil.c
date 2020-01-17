#include "eif_eiffel.h"
#include "eif_rout_obj.h"
#include "eaddress.h"

#ifdef __cplusplus
extern "C" {
#endif

	/* TRACING_HANDLER per_thread_trace */
void A32_36 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_BOOLEAN arg5)
{
	EIF_TYPED_VALUE u [5];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(864, "per_thread_trace", Current))(Current, ((u [0].type = SK_INT32), (u [0].it_i4 = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]), ((u [2].type = SK_POINTER), (u [2].it_p = arg3), u [2]), ((u [3].type = SK_INT32), (u [3].it_i4 = arg4), u [3]), ((u [4].type = SK_BOOL), (u [4].it_b = arg5), u [4]));
}

	/* RT_DBG_CALL_RECORD inline-agent#1 of record_fields */
void _A139_159_2 ( void(*f_ptr) (EIF_REFERENCE, EIF_TYPED_VALUE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) F139_7136)(closed [1].it_r, open [1]);
}

	/* MISMATCH_INFORMATION wipe_out */
void A159_97 (EIF_REFERENCE Current)
{
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2343, "wipe_out", Current))(Current);
}

	/* MISMATCH_INFORMATION internal_put */
void A159_161 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3070, "internal_put", Current))(Current, ((u [0].type = SK_REF), (u [0].it_r = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* MISMATCH_INFORMATION set_string_versions */
void A159_162 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_TYPED_VALUE u [2];
	GTCX
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3071, "set_string_versions", Current))(Current, ((u [0].type = SK_POINTER), (u [0].it_p = arg1), u [0]), ((u [1].type = SK_POINTER), (u [1].it_p = arg2), u [1]));
}

	/* STUDENT_TEST t1 */
EIF_TYPED_VALUE _A970_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5122, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t2 */
EIF_TYPED_VALUE _A970_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5123, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t3 */
EIF_TYPED_VALUE _A970_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5124, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t4 */
EIF_TYPED_VALUE _A970_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5125, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* STUDENT_TEST t5 */
EIF_TYPED_VALUE _A970_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5126, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t1 */
EIF_TYPED_VALUE _A971_77 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5128, "t1", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t2 */
EIF_TYPED_VALUE _A971_78 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5129, "t2", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3 */
EIF_TYPED_VALUE _A971_79 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5130, "t3", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3b */
EIF_TYPED_VALUE _A971_80 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5131, "t3b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t3c */
EIF_TYPED_VALUE _A971_81 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5132, "t3c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t4 */
EIF_TYPED_VALUE _A971_82 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5133, "t4", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t4c */
EIF_TYPED_VALUE _A971_83 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5134, "t4c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t5 */
EIF_TYPED_VALUE _A971_84 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5135, "t5", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t6 */
EIF_TYPED_VALUE _A971_85 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5136, "t6", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t6c */
EIF_TYPED_VALUE _A971_86 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5137, "t6c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t7 */
EIF_TYPED_VALUE _A971_87 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "t7", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9 */
EIF_TYPED_VALUE _A971_88 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5139, "t9", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9b */
EIF_TYPED_VALUE _A971_89 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5140, "t9b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t9c */
EIF_TYPED_VALUE _A971_90 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5141, "t9c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t10 */
EIF_TYPED_VALUE _A971_91 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5142, "t10", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t11 */
EIF_TYPED_VALUE _A971_92 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5143, "t11", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12 */
EIF_TYPED_VALUE _A971_93 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5144, "t12", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12b */
EIF_TYPED_VALUE _A971_94 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5145, "t12b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t12c */
EIF_TYPED_VALUE _A971_95 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5146, "t12c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t13 */
EIF_TYPED_VALUE _A971_96 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5147, "t13", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t14 */
EIF_TYPED_VALUE _A971_97 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5148, "t14", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t15 */
EIF_TYPED_VALUE _A971_98 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5149, "t15", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t16b */
EIF_TYPED_VALUE _A971_99 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5150, "t16b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t16c */
EIF_TYPED_VALUE _A971_100 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5151, "t16c", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17 */
EIF_TYPED_VALUE _A971_101 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5152, "t17", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17b */
EIF_TYPED_VALUE _A971_102 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5153, "t17b", closed [1].it_r))(closed [1].it_r);
}

	/* TEST_VERTEX_INSTRUCTOR t17c */
EIF_TYPED_VALUE _A971_103 ( EIF_TYPED_VALUE(*f_ptr) (EIF_REFERENCE), EIF_TYPED_VALUE * closed, EIF_TYPED_VALUE * open)
{
	GTCX
	return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5154, "t17c", closed [1].it_r))(closed [1].it_r);
}


static fnptr feif_address_table[] = {
(fnptr)0,
(fnptr)A32_36,
(fnptr)A159_97,
(fnptr)A159_161,
(fnptr)A159_162,
};

fnptr *egc_address_table_init = feif_address_table;



#ifdef __cplusplus
}
#endif
