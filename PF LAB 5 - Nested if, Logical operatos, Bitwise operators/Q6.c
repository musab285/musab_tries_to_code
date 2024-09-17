#include<stdio.h>
int main(){
	float weight, height, bmi;
	printf("enter weight in kgs: ");
	scanf("%g", &weight);
	printf("enter your height in metres");
	scanf("%g", &height);
	
	bmi = weight/(height*height);
	if (bmi<30){
		if(bmi<24.9){
			if(bmi<18.5){
				printf("underweight");		
			}else{
				printf("normal weight");
			}
		}else{
			printf("overweight");
		}
	}else{
		printf("obese");
	}
}