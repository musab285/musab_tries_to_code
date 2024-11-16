#include<stdio.h>
int main(){
	int length;
	printf("enter length of upper half: ");
	scanf("%d", &length);
	
	for(int line=1; line<length; line++){
		for(int space=length; space>line; space--){
			printf(" ");
		}
		for(int star=0; star<line; star++){
			printf(" *");
		}
		printf("\n");
	}
	for(int line=length; line>0; line--){
		for(int space=line; space<length; space++){
			printf(" ");
		}
		for(int star=line; star>0; star--){
			printf(" *");
		}
		printf("\n");
	}
}