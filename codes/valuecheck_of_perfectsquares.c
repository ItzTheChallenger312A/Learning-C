#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("NO\n");
        return 0;
    }

    int root = (int)sqrt(n);

    if ((long long)root * root == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}