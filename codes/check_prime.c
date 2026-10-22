#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    for (long long i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            printf("%lld\n", i);
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}
