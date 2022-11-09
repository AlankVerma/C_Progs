/* if else program - program - 12*/

/* Given a point (x,y), write a program to find out if it lies on the X-axis, Y-axis or 
   on the origin.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int x, y;
	
	printf("Enter coordinate of point (x, y): ");
	scanf("%d %d", &x, &y);
	
	if (x==0 && y==0)
	{
		printf("\nPoint lies on the origin");
	}
	else if (x==0)
	{
		printf("\nPoint lies on the Y-axis");
	}
	else if (y==0)
	{
		printf("\nPoint lies on the X-axis");
	}
	else
	{
		printf("\nPoint neither lies on the X-axis nor on the Y-axis");
	}

	return 0;
}


