#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate sum
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    // Display result
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
