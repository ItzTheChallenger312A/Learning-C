#include <stdio.h>

int main() {
    double a, b, x;

    printf("Input two variables a and b: ");
    scanf("%lf %lf", &a, &b);
    if (a == 0.0) {
        if (b == 0.0) {
            printf("Equation has infinite solutions.\n");
        } else {
            printf("Equation has no solution.\n");
            return 0;
        }
    } else {
        x = -b / a;
        if (x == 0.0) x = 0.0; // Avoid -0.00
        printf("Equation has solution x = %.2lf\n", x);
    }

    return 0;
}
