/* practice lab 2 - question 7 */

/* If a five digit number is input through the keyboard, write a program to 
   calculate the sum of its digits. 
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int number, temp, sum=0;
	
	printf("Enter a five digit number: ");
	scanf("%d", &number);
	
	while (number > 0)
	{
		temp = number%10;
		sum = sum + temp;
		number = number / 10;
	}
	
	printf ("\nSum of digits = %d", sum);
	
	return 0;
}
