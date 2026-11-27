#include <stdio.h>

#define MAX 100

void hoanVi(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int n;
  int a[MAX];
  int *p = a;

  printf("Nhap so luong phan tu n: ");
  scanf("%d", &n);

  if (n <= 0 || n > MAX) {
    printf("So luong phan tu khong hop le.\n");
    return 1;
  }

  printf("Nhap %d so nguyen:\n", n);
  for (int i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", p + i);
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (*(p + i) > *(p + j)) {
        hoanVi(p + i, p + j);
      }
    }
  }

  printf("\nDay so sau khi sap xep tang dan:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", *(p + i));
  }
  printf("\n");

  return 0;
}
