#include <stdio.h>
int main(){
	char name_initial;
	int id;
	int units;
	float rate;
	float amount, surcharge = 0, total;
	
	printf("enter initials of your name: ");
	scanf(" %c", &name_initial);
	printf("enter your customer id: ");
	scanf("%d", &id);
	printf("enter your units: ");
	scanf("%d", &units);
	
	if (units >= 200 && units < 300) {
		rate = 20.10;
		amount = units * rate;
	}
	else if (units >= 300 && units < 500){
		rate = 27.10;
		amount = units * rate;
	}
	else if (units >= 500){
		rate = 35.90;
		amount = units * rate;
	}
	else {
		rate = 16.20;
		amount = units * rate;
	}
	
	if (amount > 18000){
		surcharge = (amount * 15)/100;
	}
	total = amount + surcharge;
	
	printf("Customer id: %d", id);
	printf("\nCustomer Name: %c", name_initial);
	printf("\nUnits Consumed: %d", units);
	printf("\nAmount Charges @Rs. %g per unit: %.0f", rate, amount);
	printf("\nSurcharge Amount: %.0f", surcharge);
	printf("\nNet Amount Paid by the Customer: %.2f", total);
}