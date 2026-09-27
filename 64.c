#include <stdio.h>
int main()
{
	int first, second, result;
	printf("Enter two numbers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	result = first;
	result += second;
	printf("%d += %d: %d\n", first, second, result);

	result = first;
	result -= second;
	printf("%d -= %d: %d\n", first, second, result);

	result = first;
	result *= second;
	printf("%d *= %d: %d\n", first, second, result);

	if (second != 0) {
		result = first;
		result /= second;
		printf("%d /= %d: %d\n", first, second, result);

		result = first;
		result %= second;
		printf("%d %%= %d: %d\n", first, second, result);
	} else {
		printf("Division and remainder operations skipped because the second number is zero.\n");
	}
	return 0;
}