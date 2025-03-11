#include <stdio.h>

// Function to check the type of the triangle
void checkTriangleType(int a, int b, int c) {
    // Check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check if all sides are equal (Equilateral triangle)
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        }
        // Check if two sides are equal (Isosceles triangle)
        else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        }
        // If no sides are equal (Scalene triangle)
        else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
}

int main() {
    int a, b, c;

    // Get the input from the user
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    // Check the type of triangle
    checkTriangleType(a, b, c);

    return 0;
}
