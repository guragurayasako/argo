#include <stdio.h>
#include <stdlib.h>

#define INFTY (1 << 30)

int compare_count;

void merge(int *A, int left, int mid, int right) {
int n1 = mid - left;
int n2 = right - mid;
int L[n1 + 1], R[n2 + 1];
int i, j, k;

// L[0...n1] と R[0...n2] を生成
for (i = 0; i < n1; i++) {
L[i] = A[left + i];
}
for (i = 0; i < n2; i++) {
R[i] = A[mid + i];
}

L[n1] = INFTY;
R[n2] = INFTY;

i = 0;
j = 0;
for (k = left; k < right; k++) {
compare_count++;
if (L[i] <= R[j]) {
A[k] = L[i];
i++;
} else {
A[k] = R[j];
j++;
}
}
}

void merge_sort(int *A, int left, int right) {
if (left + 1 < right) {
int mid = (left + right) / 2;
merge_sort(A, left, mid);
merge_sort(A, mid, right);
merge(A, left, mid, right);
}
}

int main(void) {
int n;
scanf("%d", &n);

int A[n];
for (int i = 0; i < n; i++) {
scanf("%d", &A[i]);
}

compare_count = 0;
merge_sort(A, 0, n);

for (int i = 0; i < n; i++) {
printf("%d ", A[i]);
}
printf("\n");

printf("%d\n", compare_count);

return 0;
}