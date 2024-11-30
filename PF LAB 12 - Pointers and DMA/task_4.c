/*Task_04:
Write a program that implements the function(WordCount).
int WordCount(char *Text, int *size);*/

#include <stdio.h>
#include <string.h>

int WordCount(char *Text, int *size){
    int count = 0;
    *size = strlen(Text);
    for(int i = 0; i<strlen(Text); i++){
        if(*(Text+i) == ' ' || *(Text+i)==',' || *(Text+i)=='.'){
            count++;
            *size -= 1;
        }
    }
    
    return count+1;
}

int main(){
    char text[100];
    printf("Enter the text: ");
    gets(text);
    int size;
    printf("Word Count: %d\n", WordCount(text, &size));
    printf("Size: %d\n", size);
    return 0;
}