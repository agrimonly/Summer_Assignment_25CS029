#include <stdio.h>

int reverseHelper(int n, int rev) {
    if (n == 0) return rev;
    return reverseHelper(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = (n < 0) ? -n : n;
    int rev = reverseHelper(temp, 0);
    if (n < 0) rev = -rev;
    printf("Reversed number = %d\n", rev);
    return 0;
}
