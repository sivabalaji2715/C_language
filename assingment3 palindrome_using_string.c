#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, palindrome = 1;

    
    printf("Enter a string: ");
    scanf("%99s", str);


    while (str[length] != '\0') {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    
    if (palindrome)
        printf("%s is a Palindrome.\n", str);
    else
        printf("%s is Not a Palindrome.\n", str);

    return 0;
}
