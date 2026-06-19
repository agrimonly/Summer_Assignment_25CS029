#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    if (n == 1) {
        printf("Nth Fibonacci term = 0\n");
        return 0;
    }
    for (int i = 2; i < n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    printf("%dth Fibonacci term = %d\n", n, b);
    return 0;
}
