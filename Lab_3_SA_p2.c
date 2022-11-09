/* Lab 3 Sample Answer 2 */

/* Write a program to convert an alphabet to upercase if it is in lowercase, 
   otherwise display an appropriate message.
*/

/* Roll No. 22051230 */

#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter an alphabet: ");
	ch = getchar();
	
	if (ch>='a' && ch<='z')
	{
		ch = ch-32;
		printf("\nAlphabet in uppercase: %c", ch);
	}		
	else
	{
		printf("\nCharacter entered is not in lowercase");
	}

	return 0;
}