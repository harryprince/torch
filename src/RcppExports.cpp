// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torch_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// tensor_
Rcpp::XPtr<torch::Tensor> tensor_(SEXP x, std::vector<int64_t> dim, bool clone);
RcppExport SEXP _torch_tensor_(SEXP xSEXP, SEXP dimSEXP, SEXP cloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<int64_t> >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type clone(cloneSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_(x, dim, clone));
    return rcpp_result_gen;
END_RCPP
}
// tensor_print_
void tensor_print_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_print_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    tensor_print_(x);
    return R_NilValue;
END_RCPP
}
// as_array_tensor_
Rcpp::List as_array_tensor_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_as_array_tensor_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(as_array_tensor_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_abs_
Rcpp::XPtr<torch::Tensor> tensor_abs_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_abs_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_abs_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_acos_
Rcpp::XPtr<torch::Tensor> tensor_acos_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_acos_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_acos_(x));
    return rcpp_result_gen;
END_RCPP
}
// tensor_add_
Rcpp::XPtr<torch::Tensor> tensor_add_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> y);
RcppExport SEXP _torch_tensor_add_(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_add_(x, y));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addbmm_
Rcpp::XPtr<torch::Tensor> tensor_addbmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> batch1, Rcpp::XPtr<torch::Tensor> batch2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addbmm_(SEXP xSEXP, SEXP batch1SEXP, SEXP batch2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch1(batch1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type batch2(batch2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addbmm_(x, batch1, batch2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addcdiv_
Rcpp::XPtr<torch::Tensor> tensor_addcdiv_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> tensor1, Rcpp::XPtr<torch::Tensor> tensor2, double value);
RcppExport SEXP _torch_tensor_addcdiv_(SEXP xSEXP, SEXP tensor1SEXP, SEXP tensor2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor1(tensor1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor2(tensor2SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addcdiv_(x, tensor1, tensor2, value));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addcmul_
Rcpp::XPtr<torch::Tensor> tensor_addcmul_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> tensor1, Rcpp::XPtr<torch::Tensor> tensor2, double value);
RcppExport SEXP _torch_tensor_addcmul_(SEXP xSEXP, SEXP tensor1SEXP, SEXP tensor2SEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor1(tensor1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type tensor2(tensor2SEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addcmul_(x, tensor1, tensor2, value));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addmm_
Rcpp::XPtr<torch::Tensor> tensor_addmm_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat1, Rcpp::XPtr<torch::Tensor> mat2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addmm_(SEXP xSEXP, SEXP mat1SEXP, SEXP mat2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat2(mat2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addmm_(x, mat1, mat2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addmv_
Rcpp::XPtr<torch::Tensor> tensor_addmv_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> mat, Rcpp::XPtr<torch::Tensor> vec, double beta, double alpha);
RcppExport SEXP _torch_tensor_addmv_(SEXP xSEXP, SEXP matSEXP, SEXP vecSEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type mat(matSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addmv_(x, mat, vec, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_addr_
Rcpp::XPtr<torch::Tensor> tensor_addr_(Rcpp::XPtr<torch::Tensor> x, Rcpp::XPtr<torch::Tensor> vec1, Rcpp::XPtr<torch::Tensor> vec2, double beta, double alpha);
RcppExport SEXP _torch_tensor_addr_(SEXP xSEXP, SEXP vec1SEXP, SEXP vec2SEXP, SEXP betaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type vec2(vec2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_addr_(x, vec1, vec2, beta, alpha));
    return rcpp_result_gen;
END_RCPP
}
// tensor_all_
Rcpp::XPtr<torch::Tensor> tensor_all_(Rcpp::XPtr<torch::Tensor> x, std::int64_t dim, bool keepdim);
RcppExport SEXP _torch_tensor_all_(SEXP xSEXP, SEXP dimSEXP, SEXP keepdimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type keepdim(keepdimSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_all_(x, dim, keepdim));
    return rcpp_result_gen;
END_RCPP
}
// tensor_to_string_
std::string tensor_to_string_(Rcpp::XPtr<torch::Tensor> x);
RcppExport SEXP _torch_tensor_to_string_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<torch::Tensor> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tensor_to_string_(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torch_tensor_", (DL_FUNC) &_torch_tensor_, 3},
    {"_torch_tensor_print_", (DL_FUNC) &_torch_tensor_print_, 1},
    {"_torch_as_array_tensor_", (DL_FUNC) &_torch_as_array_tensor_, 1},
    {"_torch_tensor_abs_", (DL_FUNC) &_torch_tensor_abs_, 1},
    {"_torch_tensor_acos_", (DL_FUNC) &_torch_tensor_acos_, 1},
    {"_torch_tensor_add_", (DL_FUNC) &_torch_tensor_add_, 2},
    {"_torch_tensor_addbmm_", (DL_FUNC) &_torch_tensor_addbmm_, 5},
    {"_torch_tensor_addcdiv_", (DL_FUNC) &_torch_tensor_addcdiv_, 4},
    {"_torch_tensor_addcmul_", (DL_FUNC) &_torch_tensor_addcmul_, 4},
    {"_torch_tensor_addmm_", (DL_FUNC) &_torch_tensor_addmm_, 5},
    {"_torch_tensor_addmv_", (DL_FUNC) &_torch_tensor_addmv_, 5},
    {"_torch_tensor_addr_", (DL_FUNC) &_torch_tensor_addr_, 5},
    {"_torch_tensor_all_", (DL_FUNC) &_torch_tensor_all_, 3},
    {"_torch_tensor_to_string_", (DL_FUNC) &_torch_tensor_to_string_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_torch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
