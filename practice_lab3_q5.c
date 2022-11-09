/* Practice Programs - Lab 3, program - 5*/

/* Consider a currency system in which there are notes of seven 
   denminations, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 20, Rs. 50, 
   Rs. 100. If a sum of Rs. N is entered through the keyboard,
   write a program to compute the smallest number of notes that 
   will combine to give Rs. N.
*/

/* Roll No.: 22051230 */

#include <stdio.h>
  
int main()  
{  
    int amt, temp, total;  
	total = 0;
	  
    printf("Enter amount: ");  
    scanf("%d", &amt);  
  
    temp   = amt / 100;  
    amt = amt - (temp*100);
	total = total+temp;  
	if (temp!=0)  
    {
    	printf("%d   x 100 = %d\n", temp, (temp*100));  	
	}
	  
    temp   = amt / 50;  
    amt = amt - (temp*50);  
    total = total+temp;  
	if (temp!=0)  
    {
    	printf("%d   x 50  = %d\n", temp, (temp*50));  	
	}
    
    temp   = amt / 20;  
    amt = amt - (temp*20);  
	total = total+temp;  
	if (temp!=0)  
    {
    	printf("%d   x 20  = %d\n", temp, (temp*20));  	
	}
    
    temp   = amt / 10;  
    amt = amt - (temp*10);  
    total = total+temp;  
    if (temp!=0)
    {
    	printf("%d   x 10  = %d\n", temp, (temp*10));
	}
	      
    temp   = amt / 5;  
    amt = amt - (temp*5);  
	total = total+temp;  
	if (temp!=0)
    {
    	printf("%d   x 5   = %d\n", temp, (temp*5));
	}
  
    temp   = amt / 2;  
    amt = amt - (temp*2);  
    total = total+temp;  
	if (temp!=0)
    {
    	printf("%d   x 2   = %d\n", temp, (temp*2));  
	}
  
    temp   = amt / 1;  
    amt = amt - (temp*1);  
  	total = total+temp;  
	if (temp!=0)
    {
    	printf("%d   x 1   = %d\n", temp, (temp*1));    
	}
	
	printf("\nTotal notes: %d", total);
	  
    return 0;  
}  

