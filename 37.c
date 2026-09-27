//Write a program to calculate the average of three numbers.
 #include <stdio.h>
#include <conio.h>

int main(){
    int a,b,c,aveg;

    printf("enter three numbers to find their average :");
    scanf("%d%d%d",&a,&b,&c);

    aveg=(a+b+c)/3;

    printf("the average of %d %d %d is %d",a,b,c,aveg);
    getch();
    return 0;
}