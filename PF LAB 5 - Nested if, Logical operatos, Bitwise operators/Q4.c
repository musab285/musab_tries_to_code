#include<stdio.h>
int main(){
	float side1, side2, side3;
	printf("enter side1, side2, side3: ");
	scanf("%f%f%f", &side1, &side2, &side3);
	if(side1 + side2 >= side3){
		if(side1+side3>=side2){
			if(side2 + side3>= side1){
				printf("it is a triangle");
			}else{
				printf("it is not a triangle");
			}
		}else{
			printf("it is not a triangle");
		}
	}else{
		printf("it is not a triangle");
	}
}
