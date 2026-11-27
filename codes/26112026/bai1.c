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
    printf("\nMa tran khong phai la ma tran doi xung (khong phai ma tran vuong).\n");
    return 0;
  }

  int doiXung = 1;
  for (int i = 0; i < m && doiXung; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i][j] != a[j][i]) {
        doiXung = 0;
        break;
      }
    }
  }

  if (doiXung) {
    printf("\nMa tran la ma tran doi xung.\n");
  } else {
    printf("\nMa tran khong phai la ma tran doi xung.\n");
  }

  return 0;
}
