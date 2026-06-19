#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is NOT an Armstrong number\n", n);
    return 0;
}
