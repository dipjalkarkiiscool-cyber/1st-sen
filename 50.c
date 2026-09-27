//Write a program to calculate the total and average marks of five subjects.
#include <stdio.h>
#include <conio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, average;

    printf("Enter marks of five subjects:\n");

    scanf("%f", &sub1);
    scanf("%f", &sub2);
    scanf("%f", &sub3);
    scanf("%f", &sub4);
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f", average);

    getch();
    return 0;
}