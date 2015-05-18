#include <stdlib.h>


void dgemm_(const char *transa, const char *transb, const int *m, const int *n, 
            const int *k, const double *restrict alpha, const double *restrict a, 
            const int *lda, const double *restrict b, const int *ldb, 
            const double *beta, double *restrict c, const int *ldc);


#define M 2500
#define N 25000
#define P 2500


int main()
{
  char trans = 'n';
  int m = M, n = N, p = P;
  double one = 1., zero = 0.;
  double *x, *y, *z;
  
  x = malloc(m*n * sizeof(*x));
  y = malloc(n*p * sizeof(*y));
  z = malloc(m*p * sizeof(*z));
  
  dgemm_(&trans, &trans, &m, &p, &n, &one, x, &m, y, &n, &zero, z, &m);
  
  free(x);
  free(y);
  free(z);
  
  return 0;
}
