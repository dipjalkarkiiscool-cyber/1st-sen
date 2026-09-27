#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Before pre-increment: %d\n", number);
	++number;
	printf("After pre-increment: %d\n", number);
	return 0;
}