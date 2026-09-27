//Write a program to calculate simple interest.
#include <stdio.h>
#include <conio.h>

int main()
{
    float principal, time, rate, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    simpleInterest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    getch();
    return 0;
}