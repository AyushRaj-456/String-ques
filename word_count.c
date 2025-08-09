// E1 string - Count no. of words
#include <stdio.h>
#include <string.h>

int main() {
    int word_count = 0;
    char sen[100];
    printf("Enter a normal sentence, like at STP :)) (max 100 letters)-");
    gets(sen);
    printf("\nYour sentence-");
    puts(sen);
    
    for(int i=0; i<100; i++){
        if(sen[i] == ' '){
            word_count++;
        }
    }
    printf("\n%d", word_count+1);
    return 0;
}