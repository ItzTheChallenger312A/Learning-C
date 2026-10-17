#include <stdio.h>
int main () {
    int a, b, c, x = 0;
    printf("Give me three numbers (a,b,c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
        printf("Invalid input: a must be less than or equal to b\n");
        return 1;
    }
    if (c <= 0) {
        printf("Invalid input: c must be a positive integer\n");
        return 1;
    }

    for (int i = a; i <=b; i++) {
        if (i % c != 0) {
            x++;
        }
    }  
    printf("The number of integers x in the range [%d, %d] such that x is not divisible by %d is %d\n", a, b, c, x);

    return 0;   
}
