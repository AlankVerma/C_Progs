/* practice lab 2 - question 10 */

/* In a town, the percentage of men is 52. The person of total literacy
   is 48. If the total percentage of illiterate men is 35 of the total 
   population, write a program to find the total number illiterate men
   and women if the population of the town is 80000.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int number, first, last;
	
	printf("Enter a four digit number: ");
	scanf("%d", &number);
	
	first = number/1000;
	last = number%10;
	
	printf ("\nSum of first and last digit = %d", first+last);
	
	return 0;
}
