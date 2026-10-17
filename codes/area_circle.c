#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main () {
    float r;
    printf("Give me the radius of the circle: ");
    scanf("%f", &r);
    printf("Area of circle with radius %1.3f is %.3f\n", r, r * r * M_PI);
    return 0;
}