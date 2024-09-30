#include<stdio.h>
int main(){
	int num, sum=0;
	do{
	scanf("%d", &num);
	sum += num;
	}while(num!=0);
	printf("sum: %d", sum);
}