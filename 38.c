//Write a program to calculate the area of a rectangle.
 #include <stdio.h>
#include <conio.h>

int main(){
    int l,b,area;

    printf("enter length and breadth to calculate area :");
    scanf("%d%d",&l,&b);

    area=l*b;

    printf("the area of is %d",area);
    getch();
    return 0;
}