// Write a program to calculate the area and circumference of a circle.
#include <stdio.h>
#include <conio.h>

int main()
{
    float radius, area, circumference;
    float pi = 3.14159;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f", circumference);

    getch();
    return 0;
}