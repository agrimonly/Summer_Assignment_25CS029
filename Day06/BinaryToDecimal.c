#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    int decimal = 0, i = 0;
    long long temp = binary;
    while (temp != 0) {
        int rem = temp % 10;
        decimal += rem * (int)pow(2, i++);
        temp /= 10;
    }
    printf("Decimal: %d\n", decimal);
    return 0;
}
