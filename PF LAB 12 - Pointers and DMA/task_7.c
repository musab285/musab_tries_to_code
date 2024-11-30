/*Task_07:
Write a program that ask the user to enter the total 'N' no of characters in user's name {First Name + Last Name} to
create a dynamic array of characters. After create a dynamic array of that 'N' no of characters using malloc or calloc
function. Finally copy your full name in it that has already been taken from the user before

Dynamic Array = " Jawwad Ahmed";*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter the total number of characters in your name: ");
    scanf("%d", &N);
    char *name = (char *)malloc(N * sizeof(char));
    printf("Enter your full name: ");
    scanf(" %[^\n]", name);
    printf("Dynamic Array: %s", name);
    free(name);
    return 0;
}
