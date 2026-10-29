#include <stdio.h>
int main () {
    int n;
    int count = 0;
    int sum = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }
    printf("Cac so thoa man dieu kien: ");
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0 || i % 5 == 0) {
            continue;
        }
        printf("%d ", i);
        count++;
        sum += i;
    }
    printf("\n");
    printf("So luong: %d\n", count);
    printf("Tong: %lld\n", sum);
    return 0;
}
