// Write a program to multiply two numbers.#include 
#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    int produ;

    printf("enter two numbers to find the product :");
    scanf("%d %d",&a,&b);

    produ=a*b;

    printf("the product of %d and %d is %d",a,b,produ);
    getch();
    return 0;

}