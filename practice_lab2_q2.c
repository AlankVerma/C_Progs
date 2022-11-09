/* practice lab 2 - question 2 */

/* The distance between two cities (in km) is input through the keyboard. Write a 
   program to convert and print this distance in metres, feet, inches and cms.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int dist_km;
	float dist_m, dist_ft, dist_in, dist_cm;
	
	printf("Enter the ditance (in km):");
	scanf("%d", &dist_km);
	
	dist_m = dist_km * 1000;		/* 1 km = 1000 m */
	dist_ft = dist_m * 3.2808;		/* 1 m = 3.2808 feet */
	dist_in = dist_ft * 12;			/* 1 feet = 12 inches */
	dist_cm = dist_in * 2.54;		/* 1 inch = 2.54 cms */ 
	
	printf("\nDistance in metres = %0.3f", dist_m, " metres\n");
	printf("Distance in feet = %0.3f", dist_ft, " feet\n");
	printf("Distance in inches = %0.3f", dist_in, " inches\n");
	printf("Distance in cms = %0.3f", dist_cm, " cms\n");
		
	return 0;
}