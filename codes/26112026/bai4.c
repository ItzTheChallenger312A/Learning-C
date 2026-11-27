#include <stdio.h>

#define MAX 100

int main() {
  int m1, n1, m2, n2;
  int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

  printf("Nhap kich thuoc ma tran A (hang cot): ");
  scanf("%d %d", &m1, &n1);
  if (m1 <= 0 || n1 <= 0 || m1 > MAX || n1 > MAX) {
    printf("Kich thuoc ma tran A khong hop le.\n");
    return 1;
  }

  printf("Nhap cac phan tu ma tran A (%dx%d):\n", m1, n1);
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n1; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  printf("Nhap kich thuoc ma tran B (hang cot): ");
  scanf("%d %d", &m2, &n2);
  if (m2 <= 0 || n2 <= 0 || m2 > MAX || n2 > MAX) {
    printf("Kich thuoc ma tran B khong hop le.\n");
    return 1;
  }

  printf("Nhap cac phan tu ma tran B (%dx%d):\n", m2, n2);
  for (int i = 0; i < m2; i++) {
    for (int j = 0; j < n2; j++) {
      printf("b[%d][%d] = ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  if (n1 != m2) {
    printf("\nSo cot cua A (%d) khac so hang cua B (%d), khong the tinh tich.\n",
           n1, m2);
    return 0;
  }

  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n2; j++) {
      c[i][j] = 0;
      for (int k = 0; k < n1; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  printf("\nTich hai ma tran (A x B):\n");
  for (int i = 0; i < m1; i++) {
    for (int j = 0; j < n2; j++) {
      printf("%6d", c[i][j]);
    }
    printf("\n");
  }

  return 0;
}
