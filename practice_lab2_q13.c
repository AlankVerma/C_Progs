/* practice lab 2 - question 13 */

/* If a five digit nuber is input through the keyboard, write a program 
to print a new number by adding one to each of its digits.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int num, a, b, c, d, new_num;
		
	printf("Enter 5 digit number: ");
	scanf("%d", &num);
	
	a = num%10;
	num = num/10;
	b = num%10;
	num = num/10;
	c = num%10;
	num = num/10;
	d = num%10;
	num=num/10;
	
	new_num = ((num+1)*10000)+((d+1)*1000)+((c+1)*100)+((b+1)*10)+(a+1);
	
/* If the input number contains a digit 9, then to handle carry of 10
   we have to use the conditional statement, which is not part of
   the chapter.
*/	
	printf("\nNew number = %d", new_num);
	
	return 0;
}
