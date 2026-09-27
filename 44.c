// Write a program to convert Celsius into Fahrenheit.
#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    getch();
    return 0;
}