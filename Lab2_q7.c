/* Write a program to convert given second into into its equivalent 
   hour, minute, second.
*/
   
/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	int time, hr, min, sec, temp;
	
	printf("Enter time in seconds: ");
	scanf("%d", &time);
	
	temp = time;
	hr = time/3600;
	time = time%3600;
	min = time/60;
	sec = time%60;
		
	printf("\n%d second = %d hr %d min %d sec", temp, hr, min, sec);
	return 0;
}
