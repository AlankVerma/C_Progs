/* if else program - program - 1*/

/* If cost price and selling price of an item are input through the
   keyboard, write a program to determine whether the seller has made
   profit or incurred loss. Also determine how much profit he made 
   or loss he incurred.
*/

/* Roll No.: 22051230 */

#include <stdio.h>
  
int main()  
{  
	int cp, sp, pl;  
  	
	printf("Enter cost price: ");  
	scanf("%d", &cp);  
	printf("Enter selling price: ");  
    scanf("%d", &sp);
	
	pl = sp-cp;
	
	if (pl>0)
	{
		printf("Seller got profit of %d", pl);
	}  
    else if (pl<0)
    {
    	printf("Seller incurred loss of %d", pl*-1);
	}
	else
	{
		printf("Seller has neither profit, nor loss");
	}
	  
    return 0;  
}  

