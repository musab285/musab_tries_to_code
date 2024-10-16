//24K-0528

#include <stdio.h>
int main(){
	int n; 
	do{
		printf("Enter a number 'n': ");
		scanf("%d", &n);
	}while(n<100 && n>999);
	int first, third, second;
	first = n/100;
	third = n % 10;
	second = (n/10) % 10;
	if(first + third == second){
		printf("True");
	}else{
		printf("False");
	}
}