#include <stdio.h>
int main()
{
	int first, second;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	if (first > second) {
		printf("The first number is greater than the second.\n");
	} else {
		printf("The first number is not greater than the second.\n");
	}
	return 0;
}