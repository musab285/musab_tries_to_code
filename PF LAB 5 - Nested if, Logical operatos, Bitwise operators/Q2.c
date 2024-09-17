#include<stdio.h>
int main(){
	int num; 
	printf("enter a number: ");
	scanf("%d", &num);
	if (num > 0){
		if (num % 2 == 0){
			printf("positive and even");
		}else{
			printf("positive and odd");
		}
	}else{
		if (num == 0){
			printf("zero");
		}else{
			printf("negative");
		}
	}
}