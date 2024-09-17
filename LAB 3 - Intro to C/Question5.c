#include <stdio.h>
int main()
{
	float rate, principal;
	float interest = 0, total = 0;
	printf("Enter Interest Rate: ");
	scanf("%g", &rate);
	printf("Enter Principal amount: ");
	scanf("%g", &principal);
	interest = rate/100 * principal;
	total = principal + interest;
	printf("Interest earned is: %g", interest);
	printf("\nTotal Amount is: %g", total);
}