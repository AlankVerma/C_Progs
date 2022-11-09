/* Write a program to calculate area of a circle */

/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	int radius;
	float area;
	
	printf("Enter radius of the circle: ");
	scanf("%d", &radius);
	
	area = 3.14159 * radius * radius;	/* Taking Pi = 3.14159 */
	
	printf("\nArea of the circle = %f", area);
	
	return 0;
}
