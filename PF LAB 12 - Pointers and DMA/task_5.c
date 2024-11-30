/*Task_05:
Write a program that implements the SortFunction that takes argument pointer to an array, size of the array and the
order in which it is going to be sort. Such as, 1 for Asscending order and 2 for Descending orde. Finally, print this
array in Main() to check.

void SortFunction(int *arr, int *size, int order);*/

#include <stdio.h>
#include <stdlib.h>

void SortFunction(int *arr, int *size, int order){
    for(int i = 0; i<*size; i++){
        for(int j = i+1; j<*size; j++){
            if(order == 1){
                if(*(arr+i) > *(arr+j)){
                    int temp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = temp;
                }
            }
            else if(order == 2){
                if(*(arr+i) < *(arr+j)){
                    int temp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = temp;
                }
            }
        }
    }
}

int main()
{
    int size, order;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements of the array: ");
    for(int i = 0; i < size; i++){
        scanf("%d", arr+i);
    }

    printf("Enter the order(1 for Ascending, 2 for Descending): ");
    scanf("%d", &order);

    SortFunction(arr, &size, order);

    printf("Sorted Array: ");
    for(int i = 0; i<size; i++){
        printf("%d ", *(arr+i));
    }
    free(arr);
}