/* practice lab 2 - question 8 */

/* If a five digit number is input through the keyboard, write a program to 
   reverse the number. 
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int number, n1, n2, n3, n4, newnum;
	
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

	newnum = n1+n2+n3+n4+number;
	
	newnum = (n1*10000) + (n2*1000) + (n3*100) + (n4*10) + number;
	
	printf ("\nNumber reversed = %d", newnum);
	
	return 0;
}
