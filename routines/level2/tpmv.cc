#include "cblas.h"
#include "routines.h"

void dtpmv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const enum CBLAS_UPLO uplo = static_cast<CBLAS_UPLO>(info[0].As<v8::Integer>()->Value());
	const enum CBLAS_TRANSPOSE trans = static_cast<CBLAS_TRANSPOSE>(info[1].As<v8::Integer>()->Value());
	const enum CBLAS_DIAG diag = static_cast<CBLAS_DIAG>(info[2].As<v8::Integer>()->Value());
	const int n = info[3].As<v8::Integer>()->Value();
	const double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int inc_x = info[6].As<v8::Integer>()->Value();
	cblas_dtpmv(CblasRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void stpmv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const enum CBLAS_UPLO uplo = static_cast<CBLAS_UPLO>(info[0].As<v8::Integer>()->Value());
	const enum CBLAS_TRANSPOSE trans = static_cast<CBLAS_TRANSPOSE>(info[1].As<v8::Integer>()->Value());
	const enum CBLAS_DIAG diag = static_cast<CBLAS_DIAG>(info[2].As<v8::Integer>()->Value());
	const int n = info[3].As<v8::Integer>()->Value();
	const float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int inc_x = info[6].As<v8::Integer>()->Value();
	cblas_stpmv(CblasRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void ztpmv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const enum CBLAS_UPLO uplo = static_cast<CBLAS_UPLO>(info[0].As<v8::Integer>()->Value());
	const enum CBLAS_TRANSPOSE trans = static_cast<CBLAS_TRANSPOSE>(info[1].As<v8::Integer>()->Value());
	const enum CBLAS_DIAG diag = static_cast<CBLAS_DIAG>(info[2].As<v8::Integer>()->Value());
	const int n = info[3].As<v8::Integer>()->Value();
	const double *ap = reinterpret_cast<double*>(GET_CONTENTS(info[4].As<v8::Float64Array>()));
	double *x = reinterpret_cast<double*>(GET_CONTENTS(info[5].As<v8::Float64Array>()));
	const int inc_x = info[6].As<v8::Integer>()->Value();
	cblas_ztpmv(CblasRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}

void ctpmv(const v8::FunctionCallbackInfo<v8::Value>& info) {
	const enum CBLAS_UPLO uplo = static_cast<CBLAS_UPLO>(info[0].As<v8::Integer>()->Value());
	const enum CBLAS_TRANSPOSE trans = static_cast<CBLAS_TRANSPOSE>(info[1].As<v8::Integer>()->Value());
	const enum CBLAS_DIAG diag = static_cast<CBLAS_DIAG>(info[2].As<v8::Integer>()->Value());
	const int n = info[3].As<v8::Integer>()->Value();
	const float *ap = reinterpret_cast<float*>(GET_CONTENTS(info[4].As<v8::Float32Array>()));
	float *x = reinterpret_cast<float*>(GET_CONTENTS(info[5].As<v8::Float32Array>()));
	const int inc_x = info[6].As<v8::Integer>()->Value();
	cblas_ctpmv(CblasRowMajor, uplo, trans, diag, n, ap, x, inc_x);
}
