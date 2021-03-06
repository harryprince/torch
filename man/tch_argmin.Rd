% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tensor.R
\name{tch_argmin}
\alias{tch_argmin}
\title{argmin}
\usage{
tch_argmin(x, dim = NULL, keepdim = FALSE, na.rm = FALSE)
}
\arguments{
\item{x}{tensor object}

\item{dim}{if NULL (the default) will reduce to a scalar. Otherwise it will
return TRUE if all elements in each row of the tensor in the given dimension
\code{dim} are TRUE, FALSE otherwise.}

\item{keepdim}{If keepdim is TRUE, the output tensor is of the same size as
input except in the dimension dim where it is of size 1. Otherwise, dim is
squeezed \code{\link[=squeeze]{squeeze()}}, resulting in the output tensor having 1 fewer
dimension than input.}

\item{na.rm}{won't be used by the function. Only there to be compatible with
\link{all} generic.}
}
\description{
argmin
}
\examples{
x <- tensor(array(runif(8), dim = c(2,2,2)))
x
tch_argmin(x)
tch_argmin(x, dim = 0)
tch_argmin(x, dim = 1, keepdim = FALSE)
}
