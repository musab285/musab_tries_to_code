#include <stdio.h>
int main(){
	for (int i=0; i<9; i++){
		printf("enter a number for index %d: ", i);
		scanf("%d", &array[i]);
		sum += array[i];
	}
	printf("The sum is: %d", sum);
}