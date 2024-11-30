/*Task_08:
Using task 7, resize that dynamic array of character and append the array with your studentId. That student id must
be taken input from the user.

DynamicArray = " Jawwad Ahmed"; // Before

DynamicArray = "K221234 Jawwad Ahmed"; // After the text append*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    printf("Enter the total number of characters in your name: ");
    scanf("%d", &N);
    char *name = (char *)malloc((N + 1) * sizeof(char));
    printf("Enter your full name: ");
    getchar(); 
    fgets(name, N + 1, stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Dynamic Array: %s\n", name);
    printf("Enter your student ID: ");
    char tempID[100];
    scanf(" %[^\n]", tempID);
    int idLength = strlen(tempID);
    char studentID[idLength];
    name = (char *)realloc(name, (N + 1 + idLength + 1) * sizeof(char));
    strcpy(studentID, tempID);
    for (int i = N; i > 0; i--)
    {
        *(name + i + idLength) = *(name + i-1);
    }
    for (int i = 0; i < idLength; i++)
    {
        *(name + i) = studentID[i];
    }
    name[idLength] = ' ';
    name[N + idLength] = '\0';
    printf("Dynamic Array: %s\n", name);
    free(name);
    return 0;
}