% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tensor.R
\name{tch_as_strided}
\alias{tch_as_strided}
\title{as_strided}
\usage{
tch_as_strided(x, size, stride, storage_offset = NULL)
}
\arguments{
\item{x}{tensor object}

\item{size}{size}

\item{stride}{stride}

\item{storage_offset}{(optional) storage_offset}
}
\description{
TODO: create better docs.
}
\examples{
x <- tensor(array(runif(8), dim = c(2,2,2)))
tch_as_strided(x, 0, 1)
}
