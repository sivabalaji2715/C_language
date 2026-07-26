#include <stdio.h>

int main() {
    int arr[10], i;
    int even = 0, odd = 0;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Display result
    printf("Number of Even elements = %d\n", even);
    printf("Number of Odd elements = %d\n", odd);

    return 0;
}
