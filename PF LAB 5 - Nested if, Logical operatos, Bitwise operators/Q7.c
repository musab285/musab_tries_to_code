#include<stdio.h>
int main(){
	int attendance, exam, assignment;
	char grade;
	printf("Attendance? ");
	scanf("%d", &attendance);
	printf("perecentage marks in exam? ");
	scanf("%d", &exam);
	printf("Marks in assignment: ");
	scanf("%d", &assignment);
	
	if (attendance>=80){
		if (assignment >=7){
			if(exam > 70){
				if(exam > 80){
					if(exam > 85){
						grade = 'A';
					}else{
						grade = 'B';
					}
				}else{
					grade = 'C';
				}
			}else{
				grade = 'D';
			}
		}else{
			if(exam > 75){
				if(exam > 85){
					if(exam>90){
						grade = 'A';
					}else{
						grade = 'B';
					}
				}else{
					grade = 'C';
				}
			}else{
				grade = 'D';
			}
		}
	}else{
		grade = 'F';
	}
	printf("your grade is %c", grade);
}