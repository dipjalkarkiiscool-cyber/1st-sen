#include <stdio.h>
int main()
{
	int first, second, third;

	printf("(10 - 5) - 2 = %d\n", (10 - 5) - 2);
	printf("10 - (5 - 2) = %d\n", 10 - (5 - 2));

	first = second = third = 5;
	printf("first = second = third = 5: %d %d %d\n", first, second, third);
	return 0;
}