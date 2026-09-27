#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	printf("Before post-increment: %d\n", number);
	printf("Value returned by post-increment: %d\n", number++);
	printf("After post-increment: %d\n", number);
	return 0;
}