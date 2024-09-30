#include <stdio.h>
int main(){
	int correct_answers = 1234432123; // sequence of correct options; last being Q1, first being Q10
	int marks = 0, question=1, current_ans, user_ans;
	while(marks < 20 && question<=10){
		current_ans = correct_answers % 10;
		correct_answers = correct_answers / 10;
		do{
			printf("enter option number for question %d: ", question);
			scanf("%d", &user_ans);
		}while(user_ans >4);
		
		if (user_ans == current_ans){
			marks += 4;
		}else{
			marks -= 1;
		}
		question += 1;
	}
	if (marks == 20){
		printf("Congratulations, you have qualified for the admission");
		return 0;
	}else{
		printf("Sorry, you did not qualify for the admission.");
		return 0; 
	}
}