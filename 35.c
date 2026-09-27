 //Write a program to find the remainder of two numbers.
 #include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    int rem;

    printf("enter two numbers :");
    scanf("%d %d",&a,&b);

    rem=a%b;

    printf(" remender of %d and %d is %d",a,b,rem);
    getch();
    return 0;

}