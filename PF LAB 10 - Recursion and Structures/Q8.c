//Write a recursive function linearSearch that takes an array, its size, the target element
//to search for, and the current index. It checks if the target is at the current index and
//continues searching in the subsequent indices until it either finds the target or exhausts
//the array.

#include <stdio.h>

int linearSearch(int arr[], int size, int target, int currentIndex) {
    if (currentIndex == size) {
        return -1;
    }
    if (arr[currentIndex] == target) {
        return currentIndex;
    }
    return linearSearch(arr, size, target, currentIndex + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int result = linearSearch(arr, size, target, 0);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
