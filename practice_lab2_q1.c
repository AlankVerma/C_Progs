/* practice lab 2 - question 1 */

/* Ramesh's basic salary is input through keyboard;His dearness allowance is 40% of 
   basic salary, and house rent allowance is 20% of basic salary. Write a program
   to calculate his gross salary.
*/
/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int basic_sal, d_allowance, hr_allowance, gross_sal;
	
	printf("Enter the basic salary:");
	scanf("%d", &basic_sal);
	
	d_allowance = basic_sal * 0.4;
	hr_allowance = basic_sal * 0.2;
	
	gross_sal = basic_sal + d_allowance + hr_allowance;
	
	/* the calculation can be done without the two intermediate variables as 
	gross_sal = basic_sal + (basic_sal*0.4) + (basic_sal*0.2); */
	
	printf("Gross Salary = %d", gross_sal);
		
	return 0;
}