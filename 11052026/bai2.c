#include <stdio.h>

int main() {
    int n, x, count = 0;
    const int N = 100;
    int a[N];

    // Nhập số lượng phần tử
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    // Nhập dãy số
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Nhập số x cần tìm
    printf("Nhap so x can dem: ");
    scanf("%d", &x);

    // Đếm số lần x xuất hiện
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }

    printf("So %d xuat hien %d lan trong day.\n", x, count);

    return 0;
}
