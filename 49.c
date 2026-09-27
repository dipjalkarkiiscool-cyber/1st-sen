//Write a program to convert seconds into hours, minutes, and seconds.
#include <stdio.h>
#include <conio.h>

int main()
{
    int total_seconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d", seconds);

    getch();
    return 0;
}