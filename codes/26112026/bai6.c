#include <stdio.h>

void hoanVi(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x, y;

  printf("Nhap so thu nhat: ");
  scanf("%d", &x);
  printf("Nhap so thu hai: ");
  scanf("%d", &y);

  printf("\nTruoc khi hoan vi: x = %d, y = %d\n", x, y);
  hoanVi(&x, &y);
  printf("Sau khi hoan vi:   x = %d, y = %d\n", x, y);

  return 0;
}
