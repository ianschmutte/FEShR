// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_thetahat
arma::mat get_thetahat(const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_get_thetahat(SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(get_thetahat(mu, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// get_Dmat_dvec
Rcpp::List get_Dmat_dvec(const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M, const arma::mat& W);
RcppExport SEXP _FEShR_get_Dmat_dvec(SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(get_Dmat_dvec(Lambda, y, M, W));
    return rcpp_result_gen;
END_RCPP
}
// nll
double nll(const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_nll(SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(nll(mu, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// nll_deriv
arma::mat nll_deriv(const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_nll_deriv(SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(nll_deriv(mu, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// opt_mu_Lambda_nll
arma::mat opt_mu_Lambda_nll(const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_opt_mu_Lambda_nll(SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_mu_Lambda_nll(Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// opt_mu_Lambda_ol
arma::mat opt_mu_Lambda_ol(const arma::mat& thetas, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_opt_mu_Lambda_ol(SEXP thetasSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(opt_mu_Lambda_ol(thetas, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// oracle_loss_cpp
double oracle_loss_cpp(const arma::mat& thetas, const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_oracle_loss_cpp(SEXP thetasSEXP, SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(oracle_loss_cpp(thetas, mu, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// oracle_cpp_deriv
arma::mat oracle_cpp_deriv(const arma::mat& thetas, const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M);
RcppExport SEXP _FEShR_oracle_cpp_deriv(SEXP thetasSEXP, SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(oracle_cpp_deriv(thetas, mu, Lambda, y, M));
    return rcpp_result_gen;
END_RCPP
}
// URE
double URE(const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M, const arma::mat& W);
RcppExport SEXP _FEShR_URE(SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(URE(mu, Lambda, y, M, W));
    return rcpp_result_gen;
END_RCPP
}
// URE_deriv
arma::mat URE_deriv(const arma::mat& mu, const arma::mat& Lambda, const arma::mat& y, Rcpp::List& M, const arma::mat& W);
RcppExport SEXP _FEShR_URE_deriv(SEXP muSEXP, SEXP LambdaSEXP, SEXP ySEXP, SEXP MSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W(WSEXP);
    rcpp_result_gen = Rcpp::wrap(URE_deriv(mu, Lambda, y, M, W));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_FEShR_get_thetahat", (DL_FUNC) &_FEShR_get_thetahat, 4},
    {"_FEShR_get_Dmat_dvec", (DL_FUNC) &_FEShR_get_Dmat_dvec, 4},
    {"_FEShR_nll", (DL_FUNC) &_FEShR_nll, 4},
    {"_FEShR_nll_deriv", (DL_FUNC) &_FEShR_nll_deriv, 4},
    {"_FEShR_opt_mu_Lambda_nll", (DL_FUNC) &_FEShR_opt_mu_Lambda_nll, 3},
    {"_FEShR_opt_mu_Lambda_ol", (DL_FUNC) &_FEShR_opt_mu_Lambda_ol, 4},
    {"_FEShR_oracle_loss_cpp", (DL_FUNC) &_FEShR_oracle_loss_cpp, 5},
    {"_FEShR_oracle_cpp_deriv", (DL_FUNC) &_FEShR_oracle_cpp_deriv, 5},
    {"_FEShR_URE", (DL_FUNC) &_FEShR_URE, 5},
    {"_FEShR_URE_deriv", (DL_FUNC) &_FEShR_URE_deriv, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_FEShR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
