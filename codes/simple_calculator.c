#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Input the first number: ");
    scanf("%d", &a);

    printf("Input the second number: ");
    scanf("%d", &b);

    printf("Input 1 operator (/, *, +, -): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': 
            printf("%d + %d = %d\n", a, b, a + b); 
            break;
        case '-': 
            printf("%d - %d = %d\n", a, b, a - b); 
            break;
        case '*': 
            printf("%d * %d = %d\n", a, b, a * b); 
            break;
        case '/': 
            if (b == 0) {
                printf("Invalid input\n");
            } else {
                printf("%d / %d = %.2f\n", a, b, (float)a / b);
            }
            break;
        default: 
            printf("Invalid input\n"); 
            break;
    }

    return 0;
}
