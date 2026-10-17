#include <stdio.h>
int main () {
    int month, year;
    printf ("Input the number of month: ");
    scanf ("%d", &month);
    printf ("Input the year: ");
    scanf ("%d", &year);
    switch (month) {
        case 1: printf("January of year %d has 31 days\n", year); break;
        case 2: if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    printf("February of year %d has 29 days\n", year);
                } else {
                    printf("February of year %d has 28 days\n", year);
                }
                break;
        case 3: printf("March of year %d has 31 days\n", year); break;
        case 4: printf("April of year %d has 30 days\n", year); break;
        case 5: printf("May of year %d has 31 days\n", year); break;
        case 6: printf("June of year %d has 30 days\n", year); break;
        case 7: printf("July of year %d has 31 days\n", year); break;
        case 8: printf("August of year %d has 31 days\n", year); break;
        case 9: printf("September of year %d has 30 days\n", year); break;
        case 10: printf("October of year %d has 31 days\n", year); break;
        case 11: printf("November of year %d has 30 days\n", year); break;
        case 12: printf("December of year %d has 31 days\n", year); break;
        default: printf("Invalid input\n"); break;
    }
    return 0;
}