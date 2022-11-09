/* Write a program to convert given paisa into its equivalent rupee
   and paisa.
*/
   
/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	int amt, rupee, paisa;
	
	printf("Enter amount in paisa: ");
	scanf("%d", &amt);
	
	rupee = amt/100;
	paisa = amt%100;
	
	printf("\n%d paisa = %d Rupee and %d paisa", amt, rupee, paisa);
	return 0;
}
