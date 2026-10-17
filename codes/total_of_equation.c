#include <stdio.h>
int main () {
    int n, k;
    scanf ("%d %d", &n, &k);
    long long S = 0;
    for (int x = 1; x <= n; x++) {
        S += x * (x + k);   
    }
    printf ("%lld\n", S);   
    return 0;   
}