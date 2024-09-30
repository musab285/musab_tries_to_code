#include<stdio.h>
int main(){
	int multiple,a, b, flag=1; 
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	if (a<b){
		multiple = b;
	}else{
		multiple = a;
	}
	while(flag==1){
		if (multiple%a==0 && multiple%b == 0){
			flag = 0;
		}else{
			multiple += 1;
		}
	}
	printf("LCM: %d", multiple);
}