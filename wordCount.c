#include <stdio.h>

#define IN 1 /* inside a word*/
#define OUT 0 /* outside a word*/

/*
 * This program counts the words in the input
 */

int main(){
    int c, wordCount;
    int state = OUT;
    
    wordCount=0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
          state = OUT;
        }else if(state == OUT){
          state = IN;
          wordCount++;
        }
    }
     
    printf("The number of words is %d \n", wordCount);

return 0;
}
