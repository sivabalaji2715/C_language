#include <stdio.h>

int main() {
    int arr[10], i, key, found = 0;

    // Input 10 elements
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search
    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }

    // If element is not found
    if (found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}
