#include <stdio.h>

int main() {
    int n;
    double s = 0.0;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Tính tổng S = 1 + 1/2 + 1/3 + ... + 1/n
    for (int i = 1; i <= n; i++) {
        s += 1.0 / i;
    }

    // In kết quả ra màn hình
    printf("Tong S = 1 + 1/2 + ... + 1/%d la: %.4lf\n", n, s);

    return 0;
}
