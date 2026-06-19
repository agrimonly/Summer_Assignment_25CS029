#include <stdio.h>

int main() {
    int x, n;
    printf("Enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}
