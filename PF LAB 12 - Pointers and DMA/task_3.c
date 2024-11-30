/*Task_03: Write a program that finds the second highest number in a float type array of 20 elements using pointer.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *arr = (float*)malloc(4*sizeof(float));
	printf("Enter the elements of the array: ");
	for(int i = 0; i<4; i++){
		scanf("%f", arr+i);
	}
	
	for(int i = 0; i<4; i++){
		for(int j = i+1; j<4; j++){
			if(*(arr+i) < *(arr+j)){
				float temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
	int i = 1;
	while(*(arr+i) == *(arr+i-1)){
		i++;
	}
	printf("Second Highest Number: %.2f", *(arr+i));
	
} 