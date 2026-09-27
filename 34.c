// Write a program to divide two numbers.
#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    int div;

    printf("enter two numbers :");
    scanf("%d %d",&a,&b);

    div=a/b;

    printf(" %d and %d is %d",a,b,div);
    getch();
    return 0;

}