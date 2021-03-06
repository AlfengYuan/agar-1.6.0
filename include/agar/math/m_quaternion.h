/*	Public domain	*/

/* Begin generated block */
__BEGIN_DECLS
extern DECLSPEC M_Quaternion M_QuaternionMultIdentity(void) _Const_Attribute;
extern DECLSPEC M_Quaternion M_QuaternionAddIdentity(void) _Const_Attribute;
extern DECLSPEC void M_QuaternionpToAxisAngle(const M_Quaternion *_Nonnull, M_Vector3 *_Nonnull, M_Real *_Nonnull);
extern DECLSPEC void M_QuaternionpToAxisAngle3(const M_Quaternion *_Nonnull, M_Real *_Nonnull, M_Real *_Nonnull, M_Real *_Nonnull, M_Real *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionFromAxisAngle(M_Vector3, M_Real);
extern DECLSPEC M_Quaternion M_QuaternionFromAxisAngle3(M_Real, M_Real,M_Real,M_Real);
extern DECLSPEC void M_QuaternionpFromAxisAngle(M_Quaternion *_Nonnull, M_Vector3, M_Real);
extern DECLSPEC void M_QuaternionpFromAxisAngle3(M_Quaternion *_Nonnull, M_Real, M_Real,M_Real,M_Real);
extern DECLSPEC void M_QuaternionFromEulv(M_Quaternion *_Nonnull, M_Real,M_Real,M_Real);
extern DECLSPEC M_Quaternion M_QuaternionFromEul(M_Real, M_Real, M_Real);
extern DECLSPEC void M_QuaternionToMatrix44(M_Matrix44 *_Nonnull, const M_Quaternion *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionConj(M_Quaternion);
extern DECLSPEC M_Quaternion M_QuaternionConjp(const M_Quaternion *_Nonnull);
extern DECLSPEC void M_QuaternionConjv(M_Quaternion *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionScale(M_Quaternion, M_Real);
extern DECLSPEC M_Quaternion M_QuaternionScalep(const M_Quaternion *_Nonnull, M_Real);
extern DECLSPEC void M_QuaternionScalev(M_Quaternion *_Nonnull, M_Real);
extern DECLSPEC M_Quaternion M_QuaternionConcat(const M_Quaternion *_Nonnull, const M_Quaternion *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionMult(M_Quaternion, M_Quaternion);
extern DECLSPEC M_Quaternion M_QuaternionMultp(const M_Quaternion *_Nonnull, const M_Quaternion *_Nonnull);
extern DECLSPEC void M_QuaternionMultv(M_Quaternion *_Nonnull, const M_Quaternion *_Nonnull, const M_Quaternion *_Nonnull);
#define M_QuaternionMult3(a,b,c) M_QuaternionMult((b),M_QuaternionMult((a),(c)))
#define M_QuaternionMult3v(r,a,b,c) M_QuaternionMultv((r),M_QuaternionMult((a),(b)),(c))
extern DECLSPEC M_Quaternion M_QuaternionNorm(M_Quaternion);
extern DECLSPEC M_Quaternion M_QuaternionNormp(const M_Quaternion *_Nonnull);
extern DECLSPEC void M_QuaternionNormv(M_Quaternion *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionInverse(M_Quaternion);
extern DECLSPEC M_Quaternion M_QuaternionInversep(const M_Quaternion *_Nonnull);
extern DECLSPEC void M_QuaternionInversev(M_Quaternion *_Nonnull);
extern DECLSPEC M_Quaternion M_QuaternionSLERP(M_Quaternion, M_Quaternion, M_Real);
extern DECLSPEC M_Quaternion M_QuaternionSLERPp(const M_Quaternion *_Nonnull, const M_Quaternion *_Nonnull, M_Real);
extern DECLSPEC M_Quaternion M_ReadQuaternion(AG_DataSource *_Nonnull);
extern DECLSPEC void M_WriteQuaternion(AG_DataSource *_Nonnull, M_Quaternion *_Nonnull);
__END_DECLS
/* Close generated block */
