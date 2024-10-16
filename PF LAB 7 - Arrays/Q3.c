#include <stdio.h>
int main(){
	int array[10] = {4,1,6,8,10,21,8,9,2,6};
	int max = array[0] , min = array[0];
	for (int i = 1; i<(sizeof(array)/4); i++){
		if (array[i]>max){
			max = array[i];
		}
		else if (array[i] < min){
			min = array[i];
		}
	}
	printf("MAXIMUM IS: %d", max);
	printf("MINIMUM IS: %d", min);
}