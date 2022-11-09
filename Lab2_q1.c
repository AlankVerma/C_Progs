/* Write a program for addition of two integers and display the result */

#include <stdio.h>

int main()
{
	int num1, num2, result;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	result = num1 + num2;
	
	printf("\nSum of the numbers = %d", result);
	
	return 0;
}
