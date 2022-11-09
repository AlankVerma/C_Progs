/* if else program - program - 2*/

/* Write a program to test whether a number entered through keyboard
   is ODD or EVEN.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter number:");
	scanf("%d", &num);
	
	if (num%2==0)
	{
		printf("Number %d is EVEN", num);
	}
	else
	{
		printf("Number %d is ODD", num);
	}

	return 0;
}


