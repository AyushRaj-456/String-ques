/*
 C program to fund num of alphabets, 
numbers, special char of a string...
 */

#include <stdio.h>
#include <string.h>

int main() {
    int alpha_count =0;
    int num_count =0;
    int special =0;
    char alpha[250];
    printf("Enter a string- ");
    gets(alpha);
    //puts(alpha);
    int len = strlen(alpha);
    
    for(int i=0;i<len;i++){
        
        // ASCII val of a,b,c..z = 97..122
        // of A,B,C.. = 65...90
        // of 0,1,2... = 48...57
        
       // printf("-%d,%c\n", (int)alpha[i], alpha[i])
        
    }
    
    printf("Alpha count = %d\n",alpha_count);
    printf("Num count = %d\n", num_count);
    printf("Special char = %d\n", special);
    return 0;
}