/* Practice Programs - Lab 3, program - 6*/

/* Write a program to input two integers distint and display the 
   greater of the two integers.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int num1, num2;

	while (1)			/* The loop will always be true */
	{
		printf("Enter first integer:");
		scanf("%d", &num1);
		printf("Enter other integer:");
		scanf("%d", &num2);	
	
		if (num1>num2)
		{
			printf("Greater between these: %d", num1);
			break;		/* To come out of infinite loop */
		}
		else if (num2>num1)
		{
			printf("Greater between these: %d", num2);
			break;		/* To come out of infinite loop */
		}
		else
		{
			printf("Both are same...\n");
			continue;	/* To accept data again in the loop */
		}
	}
	return 0;
}


