/* if else program - program - 7*/

/* Write a program to check whether a triangle is valid or not, when the three angles
   of the triangle is input through the keyboard. 
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int A, B, C;
	
	printf("Enter value for angle A: ");
	scanf("%d", &A);
	printf("Enter value for angle B: ");
	scanf("%d", &B);
	printf("Enter value for angle C: ");
	scanf("%d", &C);
	
	if (A+B+C == 180)
	{
		printf("Triangle is valid.");
	}
	else
	{
		printf("Triangle is not valid.");
	}
	
	return 0;
}


