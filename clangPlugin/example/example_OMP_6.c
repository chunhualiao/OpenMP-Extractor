void vec_mult(int N)
{
  int i, sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for (i=0; i<N; i++) {
    sum = sum + 1;
  }
  printf("%d", sum);
}

int main() {
  vec_mult(200);
  return 0;
}
