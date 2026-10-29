#include <stdio.h>
#include <stdlib.h>
int main () {
    //use do...while for this code
    printf("Input a number: ");
    int count = 0;
    int n;
    scanf("%d", &n);
    int i = 2;
    do {
        if (n % i == 0) {
            count++;
        }
        i++;
    } while (i <= n);   
    if (count == 1) {
        printf("%d is a prime number. \n", n);
    } else {
        printf("%d is not a prime number. \n", n);
    }
    system("pause");
    return 0;
}