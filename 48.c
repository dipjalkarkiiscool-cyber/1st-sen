// Write a program to convert hours into minutes .
#include <stdio.h>
#include <conio.h>

int main()
{
    float hours, minutes;

    printf("Enter hours: ");
    scanf("%f", &hours);

    minutes = hours * 60;

    printf("Minutes = %.2f", minutes);

    getch();
    return 0;
}