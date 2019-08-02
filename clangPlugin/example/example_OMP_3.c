

void foo() {
  int i, j;
  int n = 1000, m = 1000;
  double b[1000][1000];

  #pragma omp target data map(tofrom: b[0:1000][0:1000])
  {
  #pragma omp target
  {
  #pragma omp parallel for private(j)
  for (i = 0; i < n; i++)
    #pragma omp parallel for
    for (j = 0; j < m; j++) {
      b[i][j] = 0.5;
      b[i][j] = b[i][j] + 0.5;
      b[i][j] = b[i][j] + b[i][j];
    }
  }
  }
}
