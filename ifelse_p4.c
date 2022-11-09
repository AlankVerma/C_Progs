/* if else program - program - 4*/

/* According to Gregorian calender, it was Monday on the date 01/01/01. If any year
   is input through the keyboard, write a program to find out what is the day on 
   1st January of this year.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int yr, yyyy, lp_yr, diff_yr, tot_days, day;
	yr = 1900;
	lp_yr = 0;
	
	printf("Enter Year (1900-2099):");		/* Gregorian calender */
	scanf("%d", &yyyy);
	
	diff_yr = yyyy - yr;
	while (yr < yyyy)
	{
		if (yr%100==0)
		{	
			if (yr%400 == 0)
			{
				lp_yr++;
			}
		}
		else
		{
			if (yr%4==0)
			{	
				lp_yr++;
			}	
		}
		yr++;
	}
	
	tot_days = (diff_yr - lp_yr) * 365 + (lp_yr * 366);
	day = tot_days % 7;
	
	if (day==0)		printf("\nMonday...");
	if (day==1)		printf("\nTuesday...");
	if (day==2)		printf("\nWednesday...");
	if (day==3)		printf("\nThursday...");
	if (day==4)		printf("\nFriday...");
	if (day==5)		printf("\nSaturday...");
	if (day==6)		printf("\nSunday...");
	
	return 0;
}


