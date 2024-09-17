#include <stdio.h>
int main(){
	char input; 
	printf("enter a character: ");
	scanf(" %c", &input);
	if (input >= 'A' && input <= 'Z'){
		printf("it is an uppercase character");	
	}else{ 
		if(input >= 'a' && input <= 'z'){
			printf("it is an lowercase character");
		}else{
			if (input >= '0' && input <= '9'){
				printf("it is a digit");
			}else{
				printf("special character");
			}
		}
	}
}
