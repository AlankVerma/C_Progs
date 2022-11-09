/* practice lab 2 - question 11 */

/* A cashier has currency notes of denominations 10, 50 and 100. If
   the amount to be withdrawn is input through the keyboard in hundreds,
   find the total number of currency notes of each denomination the 
   cashier will have to give to the withdrawer.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int amt, ten, fif, hun;
	
	printf("Enter the amount (in multiples of hundreds): ");
	scanf("%d", &amt);
	
	hun = amt/100;
	
/* This code is obsolate as the amount entered in in the multiples of hundred.
	amt = amt-(100*amt);
	fif = amt/50;
	amt = amt-(50*amt);
	ten = amt/10;
*/
	
	printf("\nTotal number of 100 notes = %d", hun);
	
/*
	printf("Total number of 50 notes = %d", fif);
	printf("Total number of 10 notes = %d", ten);
*/	

	return 0;
}
