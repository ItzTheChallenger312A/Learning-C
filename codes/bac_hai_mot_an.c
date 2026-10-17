#include <stdio.h>
#include <math.h>
int main () {
	float a, b, c;
	float delta;
	float x1, x2;
	scanf ("%f %f %f", &a, &b, &c);
	if (a == 0) {
		if (b == 0){
			if (c == 0) {
				printf ("Equation has infinite solutions.\n");
			} else {
				printf ("Equation has no solution.\n");
			}
		} else {
			printf ("Equation has solution x = %.3f\n", -c/b);
		}
	} else {
		delta = b*b - 4*a*c;
		if (delta < 0) {
			printf ("Equation has no solution.\n");
		} else if (delta == 0) {
			printf  ("Equation has solution x = %.3f\n", -b/(2*a));
		} else {
    		x1 = (-b + sqrt(delta))/(2*a);
    		x2 = (-b - sqrt(delta))/(2*a);
    		if (x1 > x2) {
        		float temp = x1;
        		x1 = x2;
        		x2 = temp;
    	}
    	printf("Equation has solutions x1 = %.3f and x2 = %.3f\n", x1, x2);
		}	
	}
	return 0;
}
