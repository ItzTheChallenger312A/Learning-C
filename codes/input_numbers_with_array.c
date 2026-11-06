#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int n;
  float a[MAX_SIZE];

  // 1. Nhập số lượng phần tử n
  printf("Nhap so luong phan tu n (1 <= n <= %d): ", MAX_SIZE);
  if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
    printf("So luong phan tu khong hop le!\n");
    return 1;
  }

  // 2. Nhập từng phần tử vào mảng
  printf("Nhap %d phan tu:\n", n);
  for (int i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%f", &a[i]);
  }

  // 3. Sắp xếp mảng tăng dần (thuat toan Interchange Sort / Doi cho truc tiep)
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        // Hoán đổi vị trí của a[i] và a[j]
        float temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  // 4. In kết quả sau khi sắp xếp
  printf("\nDanh sach sau khi sap xep tang dan:\n");
  for (int i = 0; i < n; i++) {
    printf("%.2f ", a[i]);
  }
  printf("\n");

  return 0;
}
