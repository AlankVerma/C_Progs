/* Practice Programs - Lab 3, program - 9*/

/* Write a program to read an alphabet from the user and convert it into 
   lowercase if the entered alphabet is in upper case, otherwise display
   an appropriate message.
*/

/* Roll No.: 22051230 */

#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter an alphabet (uppercase only):");
	ch=getchar();
	
	if (ch >= 'A' && ch <= 'Z')
	{
		ch = ch+32;
		printf("Alphabet in lowercase: %c", ch);
	}
	else
	{
		printf("Data is not an uppercase alphabet...");
	}
	
	return 0;
}


