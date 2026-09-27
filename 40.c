//Write a program to calculate the perimeter of a triangle.
#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b, c, perimeter;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    printf("Perimeter of triangle = %.2f", perimeter);

    getch();
    return 0;
}