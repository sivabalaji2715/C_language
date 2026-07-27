#include <stdio.h>

int main() {
    int arr[10], i, key, found = 0;

    
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);

    
    for (i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (found == 0) {
        printf("Element not found.\n");
    }

    return 0;
}
