#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) {
        count += temp & 1;
        temp >>= 1;
    }
    printf("Number of set bits in %d = %d\n", n, count);
    return 0;
}
