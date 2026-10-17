#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a' ... 'z':
            printf("'%c' belongs to the alphabet, lowercase type.\n", ch);
            break;
        case 'A' ... 'Z':
            printf("'%c' belongs to the alphabet, uppercase type.\n", ch);
            break;
        default:
            printf("'%c' does NOT belong to the alphabet.\n", ch);
            break;
    }

    return 0;
}
