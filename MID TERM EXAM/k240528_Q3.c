//24K-0528


#include <stdio.h>
int main(){
	int lowerbound, upperbound; 
	int odd_count = 0, index = 0;
	
	printf("Enter the starting number of the range: ");
	scanf("%d", &lowerbound);
	printf("Enter the ending number of the range: ");
	scanf("%d", &upperbound);
	
	int array_size = upperbound - lowerbound;
	int array[array_size];
	int current_num = lowerbound;  
	
	while(current_num <= upperbound){
		if(odd_count < 5 ){
			if(current_num % 2 != 0){
				array[index] = current_num;
				index += 1;
				odd_count += 1;
			}
			current_num += 1;
		}else{
			if(current_num % 2 == 0){
				array[index] = current_num;
				index += 1;
				odd_count = 0;
			}
			current_num += 1;
		}
	}
	printf("The generated sequence is: \n");
	for (int i = 0; i < index; i++){
		printf("%d  ", array[i]);
	}
}