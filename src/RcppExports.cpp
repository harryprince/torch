// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torch_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// create_torch_tensor
void create_torch_tensor();
RcppExport SEXP _torch_create_torch_tensor() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    create_torch_tensor();
    return R_NilValue;
END_RCPP
}
// create_tensor
SEXP create_tensor();
RcppExport SEXP _torch_create_tensor() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(create_tensor());
    return rcpp_result_gen;
END_RCPP
}
// print_tensor
void print_tensor(SEXP a);
RcppExport SEXP _torch_print_tensor(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type a(aSEXP);
    print_tensor(a);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torch_create_torch_tensor", (DL_FUNC) &_torch_create_torch_tensor, 0},
    {"_torch_create_tensor", (DL_FUNC) &_torch_create_tensor, 0},
    {"_torch_print_tensor", (DL_FUNC) &_torch_print_tensor, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_torch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
