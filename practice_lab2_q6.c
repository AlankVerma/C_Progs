/* practice lab 2 - question 6 */

/* Two numbers are input through the keyboard into two locations C and D.
   Write a program to interchange the contents of C and D. 
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int C, D, temp;
		
	printf("Enter value for C: ");
	scanf("%d", &C);
	printf("Enter value for D: ");
	scanf("%d", &D);
	
	printf("\nBefore interchange Value in C and D are - %d and %d", C, D);
	
	temp = C;
	C = D;
	D = temp;
	
	printf("\nAftyer interchange value in C and D are - %d and %d", C, D);
	
	return 0;
}
