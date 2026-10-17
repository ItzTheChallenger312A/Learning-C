#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Give me a number: ");
    scanf("%d", &n);

    printf("Even numbers: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    system("pause");

    return 0;
}
