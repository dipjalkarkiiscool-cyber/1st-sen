#include <stdio.h>
int main()
{
	int first, second;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	if (first != second) {
		printf("The numbers are different.\n");
	} else {
		printf("The numbers are the same.\n");
	}
	return 0;
}