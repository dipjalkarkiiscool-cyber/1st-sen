#include <stdio.h>
int main()
{
	int first, second;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	if (first > 0 && second > 0) {
		printf("Both numbers are positive.\n");
	} else {
		printf("At least one number is not positive.\n");
	}
	return 0;
}