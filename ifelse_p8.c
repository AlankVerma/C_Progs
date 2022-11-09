/* if else program - program - 8*/

/* Write a program to find the absolute value of a number entered through keyboard. */

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int num, abs_val;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	if (num>0)
	{
		abs_val = num;
	}
	else
	{
		abs_val = num * -1;
	}
	
	printf("\nAbsolute value of %d = %d", num, abs_val);
	
	return 0;
}


