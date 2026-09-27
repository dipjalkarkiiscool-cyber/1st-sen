// Write a program to convert Fahrenheit into Celsius.
#include <stdio.h>
#include <conio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius = %.2f", celsius);

    getch();
    return 0;
}