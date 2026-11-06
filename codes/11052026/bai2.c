#include <stdio.h>

int main() {
  int n, x, count = 0;
  const int N = 100;
  int a[N];

  printf("Nhap so luong phan tu n: ");
  scanf("%d", &n);

  printf("Nhap %d phan tu:\n", n);
  for (int i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  printf("Nhap so x can dem: ");
  scanf("%d", &x);

  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      count++;
    }
  }

  printf("So %d xuat hien %d lan trong day.\n", x, count);

  return 0;
}
