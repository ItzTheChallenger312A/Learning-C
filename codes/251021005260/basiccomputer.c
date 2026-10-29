#include <stdio.h>
int main () {
    int luaChon;
    double a, b;
    do {
        printf("========== MAY TINH DON GIAN ==========\n");
        printf("1. Phep cong\n");
        printf("2. Phep tru\n");
        printf("3. Phep nhan\n");
        printf("4. Phep chia\n");
        printf("0. Thoat chuong trinh\n");
        printf("=======================================\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                printf("Nhap hai so thuc a va b: ");
                scanf("%lf %lf", &a, &b);
                printf("Ket qua: %.2lf + %.2lf = %.2lf\n\n", a, b, a + b);
                break;
            case 2:
                printf("Nhap hai so thuc a va b: ");
                scanf("%lf %lf", &a, &b);
                printf("Ket qua: %.2lf - %.2lf = %.2lf\n\n", a, b, a - b);
                break;
            case 3:
                printf("Nhap hai so thuc a va b: ");
                scanf("%lf %lf", &a, &b);
                printf("Ket qua: %.2lf * %.2lf = %.2lf\n\n", a, b, a * b);
                break;
            case 4:
                printf("Nhap hai so thuc a va b: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Loi: So chia phai khac 0!\n\n");
                } else {
                    printf("Ket qua: %.2lf / %.2lf = %.2lf\n\n", a, b, a / b);
                }
                break;
            case 0:
                printf("Da thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Loi: Lua chon khong hop le! Vui long chon lai.\n\n");
                break;
        }
    } while (luaChon != 0);
    return 0;
}