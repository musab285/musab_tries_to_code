/*Task_06:
Write a program that takes N no of character in an array. Now you need to correct the array and convert it into the
Sentence Case. To correct that, you need to pass that array to a function using pointer.

void SentenceCase(char *Text, int *size);
In the end you need to print the array in Main() to check.
Sentence Case: You capitalize just the first letter of the first word in sentence. The rest of the words and letters in the
title should not be capitalized. Also the first letter after the fullstop(.)*/

#include <stdio.h> 
#include <string.h>

void SentenceCase(char *Text, int *size){
    if(*Text >= 'a' && *Text <= 'z'){
        *Text = *Text - 32;
    }
    for(int i = 1; i<*size; i++){
        if(*(Text+i) == '.'){
            if(*(Text+i+2) >= 'a' && *(Text+i+2) <= 'z'){
                *(Text+i+2) = *(Text+i+2) - 32;
            }
        }
    }
}

int main(){
    char text[100];
    printf("Enter the text: ");
    gets(text);
    int size = strlen(text);
    SentenceCase(text, &size);
    printf("Sentence Case: %s\n", text);
    return 0;
}




