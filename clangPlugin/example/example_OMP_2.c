int main(int argc, char *argv[]) {
  int i, j;
  int len = 20;

  double a[20][20];

  #pragma omp target data map(tofrom: a[0:20])
  {
  #pragma omp target parallel for ordered
  for (i = 0; i < len; i++)
    #pragma omp parallel for ordered
    for (j = 0; j < len; j++)
      #pragma omp ordered
      a[i][j] = (i * len + j + 0.5);
  }
}

