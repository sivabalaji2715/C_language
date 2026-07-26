#include <stdio.h>

int main() {
    int n, i;

    // Input
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Print numbers from 1 to N
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
