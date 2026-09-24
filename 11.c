#include <stdio.h>

int main(void) {
    int integer = 2000000;
    float decimal = 2.7f;
    double preciseDecimal = 3.14159;
    char character = 'a';
    short smallNumber = 100;

    printf("Integer: %d\n", integer);
    printf("Float: %.1f\n", decimal);
    printf("Double: %.5f\n", preciseDecimal);
    printf("Character: %c\n", character);
    printf("Short integer: %hd\n", smallNumber);

    return 0;
}