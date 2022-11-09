/* practice lab 2 - question 7 */

/* If a five digit number is input through the keyboard, write a program to 
   calculate the sum of its digits. 
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int number, n1, n2, n3, n4, sum=0;
	
	printf("Enter a five digit number: ");
	scanf("%d", &number);
	
	n1 = number%10;
	number = number/10;

	n2 = number%10;
	number = number/10;

	n3 = number%10;
	number = number/10;

	n4 = number%10;
	number = number/10;

	sum = n1+n2+n3+n4+number;
	
	printf ("\nSum of digits = %d", sum);
	
	return 0;
}
