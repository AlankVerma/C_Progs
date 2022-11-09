/* practice lab 2 - question 3 */

/* If the marks obtained by a student in five different subjects are input  
   through the keyboard, find out the aggregate marks and percentage marks 
   obtained by the student. Assume that the maximum marks that can be obtained
   by a student in each subject is 100.
*/

/* ROll No. - 22051230 */

#include <stdio.h>
int main()
{
	int mark1, mark2, mark3, mark4, mark5, aggr_marks;
	float perc_marks;
	
	printf("Enter marks of subject 1:");
	scanf("%d", &mark1);
	printf("Enter marks of subject 2:");
	scanf("%d", &mark2);
	printf("Enter marks of subject 3:");
	scanf("%d", &mark3);
	printf("Enter marks of subject 4:");
	scanf("%d", &mark4);
	printf("Enter marks of subject 5:");
	scanf("%d", &mark5);
	
	aggr_marks = mark1 + mark2 + mark3 + mark4 + mark5;
	perc_marks = aggr_marks/5;		/* (aggr_marks/500)*100 is same */
		
	printf("\nAggregate marks = %d", aggr_marks);
	printf("\nPercentage marks = %0.2f", perc_marks);

	return 0;
}