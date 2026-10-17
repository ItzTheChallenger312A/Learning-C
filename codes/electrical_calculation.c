#include <stdio.h>
int main () {
    int kWh;
    printf("Enter the kWh: ");
    scanf("%d", &kWh);
    if (kWh < 50) {
        printf("The bill is %d VND\n", kWh * 1000);
    } else if (kWh < 100) {
        printf("The bill is %d VND\n", 50 * 1000 + (kWh - 50) * 1200);
    } else if (kWh < 200) {
        printf("The bill is %d VND\n", 50 * 1000 + 50 * 1200 + (kWh - 100) * 1500);
    } else {
        printf("The bill is %d VND\n", 50 * 1000 + 50 * 1200 + 100 * 1500 + (kWh - 200) * 2000);
    }
    return 0;
}