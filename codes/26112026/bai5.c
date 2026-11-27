#include <stdio.h>

#define MAX 100

int main() {
  int m, n;
  int a[MAX][MAX];
  int rowMin[MAX], colMax[MAX];

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

  for (int i = 0; i < m; i++) {
    rowMin[i] = a[i][0];
    for (int j = 1; j < n; j++) {
      if (a[i][j] < rowMin[i]) {
        rowMin[i] = a[i][j];
      }
    }
  }

  for (int j = 0; j < n; j++) {
    colMax[j] = a[0][j];
    for (int i = 1; i < m; i++) {
      if (a[i][j] > colMax[j]) {
        colMax[j] = a[i][j];
      }
    }
  }

  int found = 0;
  printf("\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] == rowMin[i] && a[i][j] == colMax[j]) {
        printf("Diem yen ngua tai (%d, %d): gia tri = %d\n", i, j, a[i][j]);
        found = 1;
      }
    }
  }

  if (!found) {
    printf("Khong co diem yen ngua\n");
  }

  return 0;
}
