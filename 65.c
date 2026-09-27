#include <stdio.h>
int main()
{
	double left, right, result;
	char operation;
	printf("Enter an expression (for example, 12.5 * 2): ");
	if (scanf("%lf %c %lf", &left, &operation, &right) != 3) {
		printf("Invalid input.\n");
		return 1;
	}

	switch (operation) {
	case '+':
		result = left + right;
		break;
	case '-':
		result = left - right;
		break;
	case '*':
		result = left * right;
		break;
	case '/':
		if (right == 0) {
			printf("Cannot divide by zero.\n");
			return 1;
		}
		result = left / right;
		break;
	default:
		printf("Unsupported operator. Use +, -, *, or /.\n");
		return 1;
	}

	printf("%.2f %c %.2f = %.2f\n", left, operation, right, result);
	return 0;
}