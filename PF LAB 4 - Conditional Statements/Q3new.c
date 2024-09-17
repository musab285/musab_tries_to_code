#include <stdio.h>
int main(){
	float num1, num2;
	char oper;
	float result; 
	printf("enter 1st number: ");
	scanf("%f", &num1);
	
	printf("enter 2nd number: ");
	scanf("%f", &num2);
	
	printf("enter operator: ");
	scanf("  %c", &oper);
	
	switch (oper){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;		
		case '/':
			if (num2 !=0){
				result = num1 / num2;
			}
			else{
				printf("zero division error");
			}
			break;
		default:
			printf("invalid operator, try again");
			break;
				
	}
	printf("The answer is: %f", result);
	return 0;
}