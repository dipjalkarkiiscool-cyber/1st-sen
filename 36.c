//Write a program to calculate the area of a triangle.
#include <stdio.h>
#include <conio.h>

int main(){
    int h,b,area;

    printf("enter height and base to calculate area :");
    scanf("%d%d",&h,&b);

    area=(0.5)*(b*h);

    printf("the area of is %d",area);
    getch();
    return 0;
}