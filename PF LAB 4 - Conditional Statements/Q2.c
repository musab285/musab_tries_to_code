#include <stdio.h>
int main(){
	char letter;
	printf("enter a character: ");
	scanf("%c", &letter);
	if (letter == 'a' || letter == 'e' || letter == 'i'|| letter == 'o'|| letter == 'u'){
		printf("the letter is a vowel");
	}
	else {
		printf("letter is a consonant");
	}
}