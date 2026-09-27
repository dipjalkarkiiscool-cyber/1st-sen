#include <stdio.h>
int main()
{
	int number;
	printf("Enter an integer: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("%d is %s.\n", number, number % 2 == 0 ? "even" : "odd");
	return 0;
}