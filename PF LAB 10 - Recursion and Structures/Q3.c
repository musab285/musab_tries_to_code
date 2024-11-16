//Create a program with a constant that defines the maximum allowable temperature (in
//Celsius). Write a function to compare input temperatures and use a static variable to
//count how many times temperatures exceeded the limit.
#include <stdio.h>

#define max 40 

int count(int temp){
	static int counter = 0;
	if(temp > max){
		counter++;
	}
	return counter;
}

int main(){
	int temp, counter;
	scanf("%d", &temp);
	while(temp!=-273){  //-273 will end the program
		counter = count(temp);
		scanf("%d", &temp);
	}
	printf("Temp exceeded %d times", counter);
}