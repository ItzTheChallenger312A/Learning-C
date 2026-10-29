#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    int x = abs(a);
    int y = abs(b);

    // Xu ly truong hop dac biet
    if (x == 0 && y == 0) {
        printf("Khong xac dinh UCLN cua 0 va 0.\n");
        return 0;
    }
    if (x == 0) {
        printf("UCLN cua %d va %d la: %d\n", a, b, y);
        return 0;
    }
    if (y == 0) {
        printf("UCLN cua %d va %d la: %d\n", a, b, x);
        return 0;
    }

    // Giai thuat Euclid su dung phep tru
    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }

    printf("UCLN cua %d va %d la: %d\n", a, b, x);

    return 0;
}
