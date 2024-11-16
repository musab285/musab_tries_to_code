//Write a recursive function that calculates the sum of digits of a number. For example, if
//the input is 123, the output should be 6.

#include<stdio.h>

int sum(int num){
	static cal_sum = 0;
	if(num==0){
		return cal_sum;
	}else{
		cal_sum += num%10;
		num = num/10;
		sum(num);
	}
}

int main(){
	int cal_sum, num;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Sum: %d", sum(num));
}