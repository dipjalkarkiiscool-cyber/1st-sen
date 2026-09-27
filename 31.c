// Write a program to add two numbers.#include 
#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    int sum;

    printf("enter two numbers to find the sum :");
    scanf("%d %d",&a,&b);

    sum=a+b;

    printf("the sum of %d and %d is %d",a,b,sum);
    getch();
    return 0;

}