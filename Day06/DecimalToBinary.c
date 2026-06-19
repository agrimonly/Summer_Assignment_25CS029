#include <stdio.h>

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int binary[32], i = 0;
    int temp = (n < 0) ? -n : n;
    if (temp == 0) { printf("Binary: 0\n"); return 0; }
    while (temp != 0) {
        binary[i++] = temp % 2;
        temp /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) printf("%d", binary[j]);
    printf("\n");
    return 0;
}
