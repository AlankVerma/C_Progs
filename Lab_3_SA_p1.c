/* Lab 3 Sample Answer 1 */

/* Write a program to find the largest between two numbers. */

/* Roll No. 22051230 */

#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	if (num1>num2)
	{
		printf("%d is greater", num1);
	}	
	else if (num2>num1)
	{
		printf("%d is greater", num2);
	}
	else
	{
		printf("Both numbers are equal");
	}
		
	return 0;
}