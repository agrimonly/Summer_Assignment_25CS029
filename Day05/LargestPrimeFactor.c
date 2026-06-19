#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int largest = -1, temp = n;
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            largest = i;
            temp /= i;
        }
    }
    if (temp > 1) largest = temp;
    printf("Largest prime factor of %d = %d\n", n, largest);
    return 0;
}
