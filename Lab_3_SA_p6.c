/* Lab 3 Sample Answer 6 */

/* Write a program to display the grade system of KIIT University based 
   on total marks secured by a student in a semester.
		>= 90	O
		80-90	A
		60-79	B
		50-69	C
		<50		Fail
	Use switch-case statement. 
*/

/* Roll No. 22051230 */

#include<stdio.h>

int main()
{
	int marks;
	  
	printf("\nEnter The Marks Between 0 To 100:");
	printf("\nEnter The Mark: ");
	scanf("%d", &marks);
   
	if(marks>100)			/* Marks greater than 100 */
	{
		printf("\nERROR: Marks entered is more than the maximum\n");
	}
	else
	{
		switch(marks/10)
		{
			case 10 :
			case 9 : printf("\nGrade: O");		/* Marks between 90-100 */
					break;
			case 8 : printf("\nGrade: A");		/* Marks between 80-89 */
					break;
			case 7 : 
			case 6 : printf("\nGrade: B");		/* Marks between 60-79 */
					break;
			case 5 : printf("\nGrade: C");		/* Marks between 50-59 */
					break;
			default : printf("\nGrade: Fail\n");	/* Marks less than 50 */
	   }
 	}

   return 0;
}