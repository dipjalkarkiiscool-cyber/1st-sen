#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	if (!number) {
		printf("The number is zero.\n");
	} else {
		printf("The number is not zero.\n");
	}
	return 0;
}