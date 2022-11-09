/* Write a program to calculate area of a triangle, base ond height is given */

/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	int base, height;
	float area;
	
	printf("Enter base of the triangle: ");
	scanf("%d", &base);
	printf("Enter height of the triangle: ");
	scanf("%d", &height);
	
	area = 0.5 * base * height;
	
	printf("\nArea of the tringle = %f", area);
	
	return 0;
}
