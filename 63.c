#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Before post-decrement: %d\n", number);
	printf("Value returned by post-decrement: %d\n", number--);
	printf("After post-decrement: %d\n", number);
	return 0;
}