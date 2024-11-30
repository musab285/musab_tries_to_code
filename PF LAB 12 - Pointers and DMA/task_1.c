// Task_01:
// Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To implement this, you need to
// write a function called swaped().

// void swaped(int *aPtr, int *bPtr, int *cPtr);

// such that; b ----> temp
// a ----> b
// c ----> a
// temp -> a

#include <stdio.h>

void swaped(int *aPtr, int *bPtr, int *cPtr){
    int temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}

int main(){
    int a , b , c;
    printf("Enter the value of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    swaped(&a, &b, &c);
    printf("Swapped: a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}