/* if else program - program - 10*/

/* Given three points (x1,y1). (x2,y2) and (x3,y3) write a program to check if all the
   three points fall on one straight line.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int x1, y1, x2, y2, x3, y3, m, n;
	
	printf("Enter point (x1, y1): ");
	scanf("%d %d", &x1, &y1);
	printf("Enter point (x2, y2): ");
	scanf("%d %d", &x2, &y2);
	printf("Enter point (x3, y3): ");
	scanf("%d %d", &x3, &y3);
	
	m = (y2-y1)/(x2-1);
	n = (y3-y2)/(x3-x2);
	
	if (m == n)
	{
		printf("All three points lie on the same line");
	}
	else
	{
		printf("All three points do no lie on the same line");
	}

	return 0;
}


