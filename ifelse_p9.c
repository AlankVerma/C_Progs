/* if else program - program - 9*/

/* Given the length and breadth of a rectangle, write a program to find whether the area of the 
   rectangle is greater than its perimeter.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int len, br, ar, peri;
	
	printf("Enter length: ");
	scanf("%d", &len);
	printf("Enter breadth: ");
	scanf("%d", &br);
	
	ar = len * br;
	peri = 2 * (len + br);
	
	printf("\nArea = %d", ar);
	printf("\nPerimeter = %d", peri);
	
	if (ar > peri)
	{
		printf("\nArea is greater than perimeter");
	}
	else
	{
		printf("\nArea is not greater than perimeter");
	}
	
	return 0;
}


