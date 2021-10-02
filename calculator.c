#include <stdio.h>
#include <stdlib.h>
int main() {
	double num1 = 0.0;
	double num2 = 0.0;
	char operation = 0;
	printf("Enter your operation\n");
	scanf("%lf%c%lf", &num1, &operation, &num2);
	switch(operation)
	{
		case '+':
			printf("=%lf\n", num1 + num2);
			break;
		case '-':
			printf("=%lf\n", num1 - num2);
			break;
		case '*':
			printf("=%lf\n", num1 * num2);
		case '/':
			if(num2 == 0) {
				printf("Error!Divide by zero!\n");
			} else {
				printf("=%lf\n",num1 / num2);
			}
			break;
		case '%':
			if(num2 == 0) {
				printf("num2 cannot be 0");
			} else {
			printf("%ld\n",(long)num1 % (long)num2);
			}
			break;
		default:
			printf("No this operator, please try another one.");
			break;
	}
	return EXIT_SUCCESS;
}
