//Write a program in C 
//to print individual characters
//of a string in reverse order.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    gets(name);
    puts(name);
    
    int len = strlen(name);
    printf("\n%d\n", len);
    
    // Reverse the string-
    
    for(int i=len-1; i>=0;i--){
        printf("%c", name[i]);
    }
    
    return 0;
}