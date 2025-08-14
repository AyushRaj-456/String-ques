//E6- Program to copy strings in C

#include <stdio.h>
#include <string.h>

int main() {
    
    char s1[100];
    char s2[100];
    
    printf("Enter a string-");
    gets(s1);
    
    strcpy(s2,s1);
    
    puts(s2);
    
    return 0;
}