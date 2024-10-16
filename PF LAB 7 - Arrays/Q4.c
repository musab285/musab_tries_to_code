#include<stdio.h>
int main(){
    int N,i,j, printCount = 0;
    printf("Array Size:");
    scanf("%d",&N);
    int array[N];
    for (i = 0; i < N; i++){
        printf("Element %d ",++i);
        i -= 1;
        scanf("%d",&array[i]);
    }
    i -= 1;
    printf("Numbers ");
    for (j = 0; j <= i; j++){
       
        if (array[j]==array[i]){
        	if (printCount == 0){
            	printf("%d",array[i]);
        	}else {
        		printf(", %d ",array[i]);
			}
			printCount += 1;
            array[j] = NULL; 
            i -= 1;
            j=0;
        }
        if (j==i-1){
            i -= 1;
            j = -1;
        }
        
    }
    printf("is repeated more than one ");
}