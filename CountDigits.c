#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    } else {
        int temp = (n < 0) ? -n : n;
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
