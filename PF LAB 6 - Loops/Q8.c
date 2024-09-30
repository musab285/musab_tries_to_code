#include<stdio.h>
int main(){
	int marks, excellent=0, above_avg=0, pass=0;
	for (int i=1; i<=5; i++){
		printf("enter marks: ");
		scanf("%d", &marks);
		if(marks >= 86 && marks <= 89){
			excellent += 1;
		}else if(marks>=70){
			above_avg += 1;
		}else if(marks>50){
			pass += 1;
		}
	}
	printf("excellent: %d\nabove_avg: %d\npass: %d", excellent, above_avg, pass);
}