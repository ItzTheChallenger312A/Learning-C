#include <stdio.h>
int main () {
    printf("Tim uoc so nho nhat cua n:\n");
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("Loi: n phai la so nguyen duong lon hon 1 (n > 1)!\n");
        return 1;
    }
    int uocNhoNhat = 0;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            uocNhoNhat = i;
            break;
        }
    }
    printf("Uoc so duong nho nhat lon hon 1 cua %d la: %d\n", n, uocNhoNhat);
    return 0;
}
