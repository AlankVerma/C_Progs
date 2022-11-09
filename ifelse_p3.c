/* if else program - program - 3*/

/* Write a program to test whether a year is leap year or not.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int year, lp;
	
	printf("Enter Year (All four digits):");
	scanf("%d", &year);
	
	if (year%100==0)
	{
		if (year%400 == 0)
		{
			lp = 1;
		}
		else
		{
			lp = 0;
		}
	}
	else
	{
		if (year%4==0)
		{
			lp=1;
		}
		else
		{
			lp = 0;
		}
	}
	if (lp==1)
	{
		printf("\nYear %d is a leap year", year);
	}
	else
	{
		printf("\nYear %d is not a leap year", year);
	}
	
	return 0;
}


