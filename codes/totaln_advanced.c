#include <stdio.h>
#include <stdlib.h>
void print128(__int128 x) {
    if (x == 0) {
        putchar('0');
        putchar('\n');
        return;
    }
    char buf[50];
    int idx = 0;
    while (x > 0) {
        buf[idx++] = (char)('0' + (x % 10));
        x /= 10;
    }
    while (idx > 0) {
        putchar(buf[--idx]);
    }
    putchar('\n');
}

int main () {
    __int128 n, total = 0;
    if (scanf("%lld", &n) == 1) {
        total = (__int128)n * (n + 1) / 2;
        print128(total);
    }
    system("pause");
    return 0;
}
