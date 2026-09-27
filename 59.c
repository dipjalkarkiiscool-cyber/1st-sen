#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	if (number % 3 == 0 && number % 5 == 0) {
		printf("The number is divisible by both 3 and 5.\n");
	} else {
		printf("The number is not divisible by both 3 and 5.\n");
	}
	return 0;
}