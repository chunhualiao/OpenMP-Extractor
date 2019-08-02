#include <stdlib.h>
void foo(int *a, int *b, int n) {
  #pragma omp parallel for
  for (int i = 0; i < n; i++) {
    a[i] = b[i];
  }
}
