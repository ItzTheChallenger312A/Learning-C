#include <stdio.h>

int main() {
  int n;
  double s = 0.0;

  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    s += 1.0 / i;
  }

  printf("Tong S = 1 + 1/2 + ... + 1/%d la: %.4lf\n", n, s);

  return 0;
}
