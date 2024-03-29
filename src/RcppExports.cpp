// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pairs_to_membership_cpp
IntegerVector pairs_to_membership_cpp(const IntegerMatrix& pairs, int num_records);
RcppExport SEXP _clevr_pairs_to_membership_cpp(SEXP pairsSEXP, SEXP num_recordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type pairs(pairsSEXP);
    Rcpp::traits::input_parameter< int >::type num_records(num_recordsSEXP);
    rcpp_result_gen = Rcpp::wrap(pairs_to_membership_cpp(pairs, num_records));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_clevr_pairs_to_membership_cpp", (DL_FUNC) &_clevr_pairs_to_membership_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_clevr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
