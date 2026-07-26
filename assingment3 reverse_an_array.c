#include <stdio.h>

int main() {
    int arr[4], i;

    // Input 4 elements
    printf("Enter 4 integers:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array in reverse order
    printf("Reversed array: ");
    for (i = 3; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
