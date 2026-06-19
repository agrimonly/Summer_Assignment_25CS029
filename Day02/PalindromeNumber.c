#include <stdio.h>

int main() {
    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if (n == rev)
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is NOT a Palindrome\n", n);
    return 0;
}
