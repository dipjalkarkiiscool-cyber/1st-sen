// Write a program to subtract two numbers.
#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    int diff;

    printf("enter two numbers to find the difference :");
    scanf("%d %d",&a,&b);

    diff=a-b;

    printf("the diff of %d and %d is %d",a,b,diff);
    getch();
    return 0;

}