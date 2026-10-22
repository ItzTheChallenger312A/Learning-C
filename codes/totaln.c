#include <stdio.h>

int main () {
    long long n, total = 0;
    scanf("%lld", &n);
    for (int i = 1; i <=n; i++) {
        total += i;
    }
    printf("%lld\n", total);

    return 0;
}
