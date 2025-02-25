#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a charecter");
    scanf("%c", &ch);
    
    if (islower(ch)) {
        printf("Lowercase\n");
    } else if (isupper(ch)) {
        printf("Uppercase\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}