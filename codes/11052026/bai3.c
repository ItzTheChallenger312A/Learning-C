#include <stdio.h>

int main() {
  int n;
  const int N = 100;
  int a[N];

  printf("Nhap so luong phan tu n: ");
  scanf("%d", &n);

  printf("Nhap %d so nguyen:\n", n);
  for (int i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  int max = a[0];
  int min = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }

  // In kết quả
  printf("\nPhan tu lon nhat: %d\n", max);
  printf("Phan tu nho nhat: %d\n", min);

  return 0;
}
