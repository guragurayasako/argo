#include <stdio.h>

int partition(int A[], int p, int r) {
  int x = A[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++) {
    if (A[j] <= x) {
      i = i + 1;
      int tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  int tmp = A[i + 1];
  A[i + 1] = A[r];
  A[r] = tmp;
  return i + 1;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int A[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  int q = partition(A, 0, n - 1);

  for (int i = 0; i < q; i++) {
    printf("%d ", A[i]);
  }
  printf("[%d] ", A[q]);
  for (int i = q + 1; i < n-1; i++) {
    printf("%d ", A[i]);
  }
  printf("%d\n", A[n-1]);

  return 0;
}
