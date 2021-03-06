% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tensor.R
\name{/.tensor}
\alias{/.tensor}
\title{Div}
\usage{
\method{/}{tensor}(x, other)
}
\arguments{
\item{x}{tensor object}

\item{other}{scalar or tensor to divide by.}
}
\description{
Divides each element of the input input with the scalar value and returns a
new resulting tensor or,
}
\details{
Each element of the tensor input is divided by each element of the tensor other.
The resulting tensor is returned. The shapes of input and other must be broadcastable.
}
\examples{
tensor(1:10)/2
tensor(1:10)/tensor(10:1)
}
