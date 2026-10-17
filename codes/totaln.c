#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, total = 0;
    printf("Give me a number: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++) {
        total += i;
    }
    printf("The total number is %d\n", total);

    system("pause");
    return 0;
}