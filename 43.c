//Write a program to calculate compound interest.
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    float principal, time, rate, amount, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Compound Interest = %.2f", compoundInterest);

    getch();
    return 0;
}