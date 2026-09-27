#include <stdio.h>
int main()
{
	int first, second;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	if (first > 0 || second > 0) {
		printf("At least one number is positive.\n");
	} else {
		printf("Neither number is positive.\n");
	}
	return 0;
}