#include<stdio.h>
int main(){
	int matrix[3][3]= { {2,1,3},
	 					{1,0,4}, 
	 					{3,0,5} };
	
	
	for(int i=0; i<3; i++){
		int smallest_inrow = matrix[i][0], smallest_index;
		for(int j=1; j<3; j++){
			if(matrix[i][j] < smallest_inrow){
				smallest_inrow = matrix[i][j];
				smallest_index = j;
			}
		}
		int largest_column = matrix[0][smallest_index];
		for(int k=0; k<3;k++){
			if(matrix[k][smallest_index] > largest_column){
				largest_column = matrix[k][smallest_index];
			}
		}
		if(largest_column == smallest_inrow){
			printf("Saddle Point: %d", smallest_inrow);
		}
	}
}