//Write a program to convert meters into centimeters.
#include <stdio.h>
#include <conio.h>

int main()
{
    float meter, centimeter;

    printf("Enter value in meters: ");
    scanf("%f", &meter);

    centimeter = meter * 100;

    printf("Value in centimeters = %.2f", centimeter);

    getch();
    return 0;
}