#include <stdio.h>

int main() {
    int n, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = (n < 0) ? -n : n;
    while (temp != 0) {
        product *= temp % 10;
        temp /= 10;
    }
    printf("Product of digits = %d\n", product);
    return 0;
}
