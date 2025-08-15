//Write a C program to sort
//a string array in 
//ascending order.

#include <stdio.h>
#include <string.h>

int main() {
    int less_than=0;
    char sen1[1000];
    printf("Enter your string-");
    gets(sen1);
    int length = strlen(sen1);
    
    
  /*  for(int k=length; k>0; k--){
        if( (int)sen1[k] == (int)sen1[k-1]){
            sen1[k-1] = ' ';
        }
    }
    */
    
    
    char arranged_sen[length];
    
    for(int i=0;i<length;i++){
        less_than =0;
        for(int j=0;j<length;j++){
            if( (int)sen1[i] < (int)sen1[j] && i!=j){
                less_than++;
            }
            
        } // loop j
        printf("%d", less_than);
        arranged_sen[length-(less_than+1)] = sen1[i];   
        
    } // loop i
    
    
  /*  for(int k=length; k>=0; k--){
        if( (int)arranged_sen[k] != 32 && (int)arranged_sen[k-1] == 32){
            (int)arranged_sen[k-1] = (int)arranged_sen[k];
           // arranged_sen[k-1] = arranged_sen[k];
        }
    } */
    
    /*for(int l=length; l>0; l--){
        if(  ){
            
        }
    }*/
    
    
    for(int j=0; j<length;j++){
        printf("%c", arranged_sen[j]);
    }
    return 0;
}