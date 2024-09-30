#include<stdio.h>
int main(){
	int n, even=0, odd=0; 
	printf("enter a num: ");
	scanf("%d", &n);
	for (int i=1; i<=n;i++){
		if (i%2==0){
			even+=1;
		}else{
			odd += 1;
		}
	}
	printf("even: %d\nodd: %d", even, odd);
}