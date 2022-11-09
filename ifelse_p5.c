/* if else program - program - 5*/

/* A five-digit number is entered through the keyboard. Write a program to obtain
   the reversed number and to determine whether the original and reversed numbers 
   are equal or not.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int num, org_num, temp, new_num=0;
	
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	
	org_num = num;
	while (num > 0)
	{
		temp = num%10;
		new_num = 10*new_num + temp;
		num = num / 10;
	}
	
	printf ("\nReversed number = %d\n", new_num);
	
	if (org_num == new_num)
	{
		printf("\nNumber %d and reversed number %d are same.", org_num, new_num);
	}
	else
	{
		printf("\nNumber %d and reversed number %d are not same.", org_num, new_num);
	}
	
	return 0;
}


