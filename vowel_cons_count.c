/*
 * Write a program in C 
 * to count the total number 
 * of vowels or consonants
 * in a string.
 */
 
 #include <stdio.h>
 #include <string.h>

int main() {
    int len = 200;
    int conso_count = 0;
    int vowel_count = 0; 
    char vowels[] = {'a','e','i','o','u'};
    char consonants[] = {'q','w','r','t','y','p','s','d','f','g','h','j','k','l','m','n','b','v','c','x','z'};
    char sent[len];
    printf("Enter the string-");
    gets(sent);
    len = strlen(sent);
    printf("\n%d\n",len);
    
    for(int i=0;i<len;i++){
        for(int j=0;j<22;j++){
            
            if(sent[i] == consonants[j] && j<21){
                conso_count++;
            }else if(sent[i] == vowels[j] && j<5){
                vowel_count++;
            }
            
            
        } // loop j
    } // loop i
    
    printf("So, Total no. consonants is %d\n & total no. of vowels is %d", conso_count,vowel_count);
    return 0;
}