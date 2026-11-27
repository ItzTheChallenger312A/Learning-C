#include <stdio.h>

#define MAX 100

int main() {
  int m, n;
  int a[MAX][MAX];

  printf("Nhap so hang m: ");
  scanf("%d", &m);
  printf("Nhap so cot n: ");
  scanf("%d", &n);

  if (m <= 0 || n <= 0 || m > MAX || n > MAX) {
    printf("Kich thuoc ma tran khong hop le.\n");
    return 1;
  }

  printf("Nhap cac phan tu cua ma tran %dx%d:\n", m, n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nMa tran vua nhap:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }

  if (m != n) {
    printf("\nMa tran khong phai la ma tran don vi (khong phai ma tran vuong).\n");
    return 0;
  }

  int donVi = 1;
  for (int i = 0; i < m && donVi; i++) {
    for (int j = 0; j < n; j++) {
      if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
        donVi = 0;
        break;
      }
    }
  }

  if (donVi) {
    printf("\nMa tran la ma tran don vi.\n");
  } else {
    printf("\nMa tran khong phai la ma tran don vi.\n");
  }

  return 0;
}
