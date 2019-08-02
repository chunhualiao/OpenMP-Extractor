void foo(int *a, int n) {
  #pragma omp parallel for ordered
  for (int i = 0; i < n; i++) {
    #pragma omp ordered
    printf("%d\n",a[i]);
  } 
}
