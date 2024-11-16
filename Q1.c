#include <stdio.h>
int main(){
	int start, end; 
	printf("Enter starting value of range: ");
	scanf("%d", &start);
	printf("Enter ending value of range: ");
	scanf("%d", &end);
	int is_prime = 1;
	for(int i = start; i < end; i++){
		int is_prime = 1;
		for(int j=2; j<i; j++){
			if(i % j == 0 || i < 2){
				is_prime = 0;
			}
		}
		if(is_prime == 1){
			printf("%d\t", i);
		}
	}
}