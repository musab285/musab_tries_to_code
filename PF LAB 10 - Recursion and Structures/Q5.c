/*Write a recursive function bubbleSort that takes an array and its size. It performs the
bubble sort algorithm by repeatedly comparing adjacent elements and swapping them if
they are in the wrong order.*/

#include <stdio.h>

void bubbleSort(int array[], int size) {
    if (size == 1) return;

    for (int index = 0; index < size - 1; index++) {
        if (array[index] > array[index + 1]) {
            int temp = array[index];
            array[index] = array[index + 1];
            array[index + 1] = temp;
        }
    }

    bubbleSort(array, size - 1);
}

void printArray(int array[], int size) {
    for (int index = 0; index < size; index++) {
        printf("%d ", array[index]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int totalElements = sizeof(numbers) / sizeof(numbers[0]);

    printf("Unsorted array:\n");
    printArray(numbers, totalElements);

    bubbleSort(numbers, totalElements);

    printf("Sorted array:\n");
    printArray(numbers, totalElements);

    return 0;
}
