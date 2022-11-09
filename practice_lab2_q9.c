/* practice lab 2 - question 9 */

/* If a four digit number is input through the keyboard, write a program to 
   obtain the sum of first and last digit of the number. 
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
