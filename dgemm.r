m <- 2500
n <- 25000
p <- 2500

x <- numeric(m*n)
dim(x) <- c(m, n)
y <- numeric(n*p)
dim(y) <- c(n, p)

z <- x %*% y
