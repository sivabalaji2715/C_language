

#include <stdio.h>          // Standard Input/Output header file
#define PI 3.14             // Macro definition for the value of PI

int main() {
    int radius;             // Variable to store the radius of the circle
    float area;             // Variable to store the calculated area
    char unit;              // Variable to store the unit of measurement

    // Ask the user to enter the radius
    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    // Ask the user to enter the unit (e.g., c for cm, m for meter)
    printf("Enter unit of measurement (e.g., c for cm): ");
    scanf(" %c", &unit);

    // Calculate the area of the circle
    // Formula: Area = PI × radius × radius
    // Radius is typecast to float for floating-point calculation
    area = PI * (float)(radius * radius);

    // Display the size of the float data type in bytes
    printf("Size of float variable: %lu bytes\n", sizeof(area));

    // Check if the calculated area is valid
    if (area > 0) {
        // Display the area along with the unit squared
        // ASCII value 178 represents the superscript ² in some character sets
        printf("Area = %.2f %c%c\n", area, unit, 178);
    }
    else {
        // Display an error message if the radius is invalid
        printf("Invalid radius entered.\n");
    }

    // Indicate successful program execution
    return 0;
}
Sample Output
Enter radius of circle: 5
Enter unit of measurement (e.g., c for cm): c
Size of float variable: 4 bytes
Area = 78.50 c²

