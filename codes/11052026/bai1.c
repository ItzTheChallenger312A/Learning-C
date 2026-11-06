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

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] < a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\nDay so sau khi sap xep giam dan:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
