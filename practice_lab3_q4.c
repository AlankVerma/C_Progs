/* Practice Programs - Lab 3, program - 4*/

/* Wind chill factor is the felt air temperature on exposed skin due to wind.
   The wind chill temperature is always lower than the air temperature, and 
   is calculated as per the following formula: 
   wcf = 35.74 + 0.6215t + (0.4275t-35.75) * (v*0.16),
   where t is the temperature and v is the wind velocity.
   Write a program to receive values of t and v and calculate wind chill factor.
*/

/* Roll No.: 22051230 */

#include <stdio.h>
#include<math.h>

int main()
{
	int t, v;
	float wcf;
	
	printf("Enter the temperature:");
	scanf("%d", &t);
	printf("Enter the wind velocity:");
	scanf("%d", &v);
		
	wcf = 35.74 + (0.6215*t) + ((0.4275*t)-35.75) * (v*0.16);	
	printf("\nWind Chill Factor: %f", wcf);

	return 0;
}


