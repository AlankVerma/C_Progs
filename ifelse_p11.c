/* if else program - program - 11*/

/* Given the coordinates (x,y) of center of a circle and its radius, write a program that will 
   determine whether a point lies inside the circle, on the circle or outside the circle.
*/

/* Roll No.: 22051230 */

#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, rad;
	float dist;
	
	printf("Enter coordinate of center (x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("Enter radius: ");
	scanf("%d", &rad);
	printf("Enter coordinate of point (x2, y2): ");
	scanf("%d %d", &x2, &y2);
	
	dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));		/* Distance between point and center */
	
	if (dist > rad)
	{
		printf("\nPoint (%d,%d) lies outside the circle", x2, y2);
	}
	else if (dist < rad)
	{
		printf("\nPoint (%d,%d) lies inside the circle", x2, y2);
	}
	else if (dist == rad)
	{
		printf("\nPoint (%d,%d) lies on the circle", x2, y2);
	}
	else
	{
		printf("Invalid data...");
	}

	return 0;
}


