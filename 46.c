//Write a program to convert kilometers into meters.
#include <stdio.h>
#include <conio.h>

int main()
{
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("Distance in meters = %.2f", meters);

    getch();
    return 0;
}