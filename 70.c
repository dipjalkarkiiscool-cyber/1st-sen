#include <stdio.h>
int main()
{
	int first, second;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	int maximum = first > second ? first : second;
	printf("The maximum is %d.\n", maximum);
	return 0;
}