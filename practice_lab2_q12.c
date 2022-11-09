/* practice lab 2 - question 12 */

/* If the total selling price of 15 items and the total profit earned on
   them is input through the keyboard, write a program to find the cost 
   price of one item.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int sp, tot_pr;
	float cp;	
	printf("Enter selling price of 15 items: ");
	scanf("%d", &sp);
	printf("Enter total profit on 15 items: ");
	scanf("%d", &tot_pr);
	cp = sp - tot_pr;
	
	printf("Cost price of one item = %.2f", cp/15.0);

	return 0;
}
