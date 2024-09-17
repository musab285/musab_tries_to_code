#include <stdio.h>
int main(){
	int marks;
	char grade;
	printf("enter marks");
	scanf("%d", &marks);
	switch(marks/10){
		case 10:
			grade = 'A';
			break;
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
	}
	printf("your grade is: %c", grade);
}