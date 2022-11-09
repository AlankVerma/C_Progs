/* practice lab 2 - question 8 */

/* If a five digit number is input through the keyboard, write a program to 
   reverse the number. 
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int number, temp, new_num=0;
	
	printf("Enter a five digit number: ");
	scanf("%d", &number);
	
	while (number > 0)
	{
		temp = number%10;
		new_num = 10*new_num + temp;
		number = number / 10;
	}
	
	printf ("\nReversed number = %d", new_num);
	
	return 0;
}
