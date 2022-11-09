/* Practice Programs - Lab 3, program - 3*/

/* If lengths of three side of a triangle are input through the keyboard
   write a program to find the area of the tringle.
*/

/* Roll No.: 22051230 */

#include <stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	float s, area;
	
	printf("Enter the measurement of first side ofthe triangle:");
	scanf("%d", &a);
	printf("Enter the measurement of second side ofthe triangle:");
	scanf("%d", &b);
	printf("Enter the measurement of third side ofthe triangle:");
	scanf("%d", &c);
	
	if (a+b>c && b+c>a && c+a>b)
	{
		printf("\nTriangle possible...\n");
		s = (a+b+c)/2.0;
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		printf("Area = %f", area);	
	}
	else
	{
		printf("\nTriangle not possible with this measurement...\n");
	}

	return 0;
}


