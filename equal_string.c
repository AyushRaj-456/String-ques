//Check if two strings are equal or not

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    char s2[100];
    printf("Enter string 1(max 100 letters)-\n");
    gets(s1);
    printf("Enter string 2(max 100 letters)-\n");
    gets(s2);
    
   // puts(s1);
    // puts(s2);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i=0; i<len1; i++){
        if(len1 != len2){
            printf("\n Both strings are unequal");
            break;
        }else if(s1[i] != s2[i] && len1 == len2){
            printf("\n Both strings are unequal");
            break;
        }else if(s1[i] == s2[i] && i == len1-1){
            printf("\n Both strings are equal");
            break;
        }
        
    } //loop close
    return 0;
}