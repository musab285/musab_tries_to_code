//24K-0528


#include <stdio.h>
int main(){
	int accountNum, items;
	float charge, balance, credits, limit, balance_new, TotalCharges = 0, exceeded = 0;
	printf("Enter your account number: ");
	scanf("%d", &accountNum);
	printf("Enter your beginning balance for the month: ");
	scanf("%g", &balance);
	printf("Enter the number of items purchased this month: ");
	scanf("%d", &items);
	for(int i = 0; i<items ; i++){
		printf("Enter Charge for item %d: ", i+1);
		scanf("%g", &charge);
		TotalCharges += charge;
	}
	printf("Enter the total credits applied to your account this month: ");
	scanf("%g", &credits);
	printf("Enter your allowed current limit: ");
	scanf("%g", &limit);
	
	balance_new = (balance + TotalCharges) - credits;
	if (balance_new > limit){
		exceeded = balance_new - limit;
	}
	printf("Account Number: %d", accountNum);
	printf("\nCredit Limit: %g", limit);
	printf("\nNew Balance: %g", balance_new);
	if (exceeded > 0){	
		printf("\nCredit limit exceeded by %g", exceeded);
	}else{
		printf("\nCredit limit didn't exceed the current limit");
	}
}