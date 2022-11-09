/* Lab 3 Sample Answer 3 */

/* Write a program to read a character from user and determine whether it is a vowel 
   or consonant or not an alphabet. 
*/

/* Roll No. 22051230 */

#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character: ");
	ch = getchar();
	
	if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		switch (ch)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': printf("Vowel");
					break;
			default: printf("Consonant");
					break;
		}
	}
	else
	{
		printf("Character entered is not an alphabet");
	}

	return 0;
}