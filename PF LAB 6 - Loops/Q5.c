#include<stdio.h>
int main(){
	int n, i, digit, result=0;
	printf("enter an integer: ");
	scanf("%d", &n);
	do{
		int length = 10;
		while (n / length > 0){
			length = length * 10;
		}
		i = length;
		digit = n % 10;
		n = n / 10;
		result += digit*i;
		i=i/10;
	}while(n>0);
	printf("%d", result/10);
}