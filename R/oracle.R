make_oracle_obj <- function(thetas, y, M, centering, diag) {
  
  T <- nrow(y)
  J <- ncol(y)
  
  if (centering == "0") {
    if (!diag) {
      oracle_obj <- function(L) {
        Lambda <- make_from_lowertri(L, T)
        oracle_loss <- 0
        for (j in 1:J) {
          thetahatj <- thetahat_j(0, Lambda, M[[j]], y[, j])
          oracle_loss_j <- sum((thetas[, j] - thetahatj)^2)
          oracle_loss <- oracle_loss + oracle_loss_j
        }
        return((1/J) * oracle_loss)
      }
    } else {
      oracle_obj <- function(D) {
        Lambda <- diag(D)^2
        oracle_loss <- 0
        for (j in 1:J) {
          thetahatj <- thetahat_j(0, Lambda, M[[j]], y[, j])
          oracle_loss_j <- sum((thetas[, j] - thetahatj)^2)
          oracle_loss <- oracle_loss + oracle_loss_j
        }
        return((1/J) * oracle_loss)
      }
    }
    
  } else if (centering == "gen") {
    ## insert oracle for general centering case
  } else {
    ##  insert oracle for covariate case
  }
  
  return(oracle_obj)
}
#' @export
get_theta_ol <- function(thetas, y, M, centering, lam_range, init_vals = 1,
                         diag = FALSE) {

  T <- nrow(y)
  J <- ncol(y)
 
  theta_ol <- matrix(0, nrow = T, ncol = J)
  obj <- make_oracle_obj(thetas, y, M, centering, diag = diag)

  if (!diag) {
    # Get init vals
    init_val_mat <- matrix(0, nrow = init_vals, ncol = T*(T+1)/2)

    init_diags <- t(rep(lam_range[1], T) + (lam_range[2] - lam_range[1]) *
                      t(randtoolbox::sobol(init_vals, dim = T)))
    init_val_mat <- sapply(1:init_vals,
                           function(j) extract_lowertri(diag(init_diags[j, ])))
    init_val_mat <- t(init_val_mat)
    
    lam_seq <- seq(max(lam_range[1], 0), lam_range[2], length.out = init_vals)
    init_vals_equl <- t(sapply(1:init_vals,
                               function(j) {
                                 extract_lowertri(lam_seq[j] * diag(T))
                               })
                        )
    init_val_mat <- rbind(init_vals_equl, init_val_mat)
  } else {
    lam_seq <- seq(max(lam_range[1], 0), lam_range[2], length.out = init_vals)
    init_vals_equl <- t(sapply(1:init_vals,
                               function(j) {lam_seq[j] * rep(1, T)})
                        )
    init_val_mat <- init_vals_equl
  }
  

  opt <- NULL
  for (j in 1:nrow(init_val_mat)) {
    init_val <- init_val_mat[j, ]
    opt_res <- optim(par = init_val, obj, method = "BFGS")
 
    opt <- min(opt_res$val, opt)
    
    if (opt == opt_res$val) {
      L <- opt_res$par
      if (!diag) {
        Lambda_ol <- make_from_lowertri(L, T)
      } else {
        Lambda_ol <- diag(L)^2
      }
    }
  }
  

  for (j in 1:J) {
    theta_ol[, j] <- thetahat_j(mu = 0, Lambda_ol, M[[j]], y[, j])
  }

  print(opt)
  print(Lambda_ol)

  return(list(theta_ol = theta_ol, Lambda_ol = Lambda_ol, obj_val = opt))
  return(theta_ol)
}