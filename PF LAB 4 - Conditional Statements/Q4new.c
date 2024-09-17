#include <stdio.h>
int main(){
	int income;
	int netincome;
	int tax;
	printf("enter your income: ");
	scanf("%d", &income);
	if (income >= 250001 && income <= 500000){
		tax = (income * 5) / 100;
	}
	else if (income >= 500001 && income <= 1000000){
		tax = (income * 20) /100;
	}
	else if (income > 1000000){
		tax = (income * 30) /100;
	}
	else {
		tax = 0;
	}	
	
	netincome = income - tax;
	printf("your income tax is: %d", tax);
	printf("\nyour net income after tax is: %d", netincome);
	return 0;
}


