#include <stdio.h>
int main(){
	int age, creditscore, income;
	printf("enter age: ");
	scanf("%d", &age);
	printf("enter income: ");
	scanf("%d", &income);
	printf("enter credtiscore: ");
	scanf("%d", &creditscore);
	if (age>=18 && income>=5000 && creditscore>600){
		printf("eligible");
	}else{
		printf("ineligible");
	}
}