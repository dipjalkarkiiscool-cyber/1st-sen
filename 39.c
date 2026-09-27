//Write a program to calculate the perimeter of a rectangle.
 #include <stdio.h>
#include <conio.h>

int main(){
    int l,b,peri;

    printf("enter length and breadth to calculate perimeter :");
    scanf("%d%d",&l,&b);

    peri=2*(l+b);

    printf("the perimeter of is %d",peri);
    getch();
    return 0;
}