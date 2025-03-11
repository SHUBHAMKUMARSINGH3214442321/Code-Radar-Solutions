#include <stdio.h>

void checkTriangleType(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles.\n");
        }
        else {
            printf("Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }
}

int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);
    checkTriangleType(a, b, c);

    return 0;
}
