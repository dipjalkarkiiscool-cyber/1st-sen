#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	if (number >= 10 && number <= 50) {
		printf("The number is between 10 and 50.\n");
	} else {
		printf("The number is outside the range 10 to 50.\n");
	}
	return 0;
}