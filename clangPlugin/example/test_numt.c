#include <stdlib.h>
#include <stdio.h>

int main() {
  int i, sum = 0;	
  #pragma omp parallel for reduction(+:sum) num_threads(5)
  for (int i = 0; i < 100; i++) {
    sum += 1;
  }
  
  for (int i = 0; i < 100; i++) {
    sum += 1;
  }

  printf ("sum = %d\n",sum);
  return 0;
}
