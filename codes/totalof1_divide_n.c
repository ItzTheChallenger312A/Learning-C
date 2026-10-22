#include <stdio.h>

int main () {
    double n, total = 0;
    scanf("%lf", &n);
    for (int i = 1; i <=n; i++) {
        total += 1.0/i;
    }
    printf("%lf\n", total);
    return 0;
}