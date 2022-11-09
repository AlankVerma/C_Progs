/* Write a program to find the Centigrade for the Fahrenheit temparature */

/* ROll No. - 22051230 */

#include <stdio.h>

int main()
{
	float Fah, Centi;
	
	printf("Enter temparature in Fahrenheit degrees: ");
	scanf("%f", &Fah);
	
	Centi = (Fah-32)*(5/9.0);	/* c/5 = (f-32)/9 */
	
	printf("\nTemparatute in Centigrade = %.2f degrees", Centi);
	
	return 0;
}
