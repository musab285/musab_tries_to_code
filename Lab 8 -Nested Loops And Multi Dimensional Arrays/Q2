#include <stdio.h>
int main(){
	int num;
	printf("enter a odd number to start from: ");
	scanf("%d", &num);
	int current_odd;
	if(num % 2 != 0){
		current_odd = num;
	}else{
		current_odd = num-1;
	}
	while(current_odd >= 1){
		for(int i=current_odd; i>=1; i-=2){
			printf("%d\t", i);
		}
		printf("\n");
		current_odd-=2;
	}
}
