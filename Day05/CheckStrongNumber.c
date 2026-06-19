#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is a Strong number\n", n);
    else
        printf("%d is NOT a Strong number\n", n);
    return 0;
}
