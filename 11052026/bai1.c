#include <stdio.h>

int main() {
    int n;
    const int N = 100;
    int a[N];

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    // Nhập các phần tử trong mảng
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Sắp xếp mảng giảm dần (Đổi chỗ trực tiếp)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // In dãy số sau khi sắp xếp giảm dần
    printf("\nDay so sau khi sap xep giam dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
