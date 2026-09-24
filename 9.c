#include <stdio.h>

int main(void) {
    int ascii = 0;
    printf("Enter an ASCII value: ");
    scanf("%d", &ascii);
    printf("The ASCII value of %d is %c\n", ascii, ascii);

    return 0;
}