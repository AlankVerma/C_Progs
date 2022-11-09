/* if else program - program - 6*/

/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program 
   to determine the youngest of the three.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	int ram, shyam, ajay, youngest;
	
	printf("Enter age of Ram: ");
	scanf("%d", &ram);
	printf("Enter age of Shyam: ");
	scanf("%d", &shyam);
	printf("Enter age of Ajay: ");
	scanf("%d", &ajay);

	if (ram<shyam && ram<ajay)
	{
		printf("\nRam is youngest");
	}
	if (shyam<ajay && shyam<ram)
	{
		printf("\nShyam is youngest");
	}
	if (ajay<ram && ajay<shyam)
	{
		printf("\nAjay is youngest");
	}
	
	return 0;
}


