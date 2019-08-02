void vec_mult(int N)
{
  int i, sum = 0;
  #pragma omp parallel for
  for (i=0; i<N; i++) {
    #pragma omp atomic write
    sum = sum + 1;
  }
  printf("%d", sum);
}

int main() {
  vec_mult(200);
  return 0;
}
