/* practice lab 2 - question 5 */

/* The length and breadth of a rectangle and radius of a circle are input 
   through the kwyboard. Write a program to calculate the area and perimeter
   of the rectangle and the area and circumference of the circle.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int length, breadth, area_r, perimeter;
	float radius, area_c, circumference;
	
	printf("Enter length of rectangle (in units): ");
	scanf("%d", &length);
	printf("Enter breadth of rectangle (in units): ");
	scanf("%d", &breadth);
	
	area_r = length * breadth;
	perimeter = 2 * (length + breadth);
	
	printf("\nEnter radius of the circle (in units): ");
	scanf("%f", &radius);
	
	area_c = 3.14159 * radius * radius;		/* Value of Pi = 3.14159 (approx) */
	circumference = 2 * 3.14159 * radius;
	
	printf("\nArea of the rectangle = %d square units", area_r);
	printf("\nPerimeter of the rectangle = %d units\n", perimeter);
	
	printf("\nArea of the circle = %f square units", area_c);
	printf("\nCircumference of the circle = %f units", circumference);
	
	return 0;
}
