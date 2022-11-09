/* Write a program to swap two integers without using third variable */

/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);

	printf("\nBoth numbers before swap: %d %d", num1, num2);
	
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	
	printf("\nBoth numbers after swap: %d %d", num1, num2);
	return 0;
}
