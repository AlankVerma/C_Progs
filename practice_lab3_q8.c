/* Practice Programs - Lab 3, program - 8*/

/* Write a program to display the grade system of KIIT University based 
   on total marks secured by a student in a semester.
		>= 90	O
		80-90	A
		60-79	B
		50-69	C
		<50		Fail
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int tot_marks;
	
	printf("Enter total marks:");
	scanf("%d", &tot_marks);
	
	if (tot_marks >= 90)
	{
		printf("Grade: O");
	}
	else if (tot_marks >=80 && tot_marks<90)
	{
		printf("Grade: A");
	}
	else if (tot_marks >=80 && tot_marks<90)
	{
		printf("Grade: A");
	}
	else if (tot_marks >=60 && tot_marks<80)
	{
		printf("Grade: B");
	}
	else if (tot_marks >=50 && tot_marks<70)
	{
		printf("Grade: C");
	}
	else 
	{
		printf("Fail...");
	}
	
	return 0;
}


