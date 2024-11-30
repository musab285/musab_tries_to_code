/*Task_02: Write a program that calculates the sum of all the elements in array using pointers*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", arr+i);
    }

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *(arr + i);
    }

    printf("Sum of the elements of the array: %d\n", sum);
	
	free(arr);
}