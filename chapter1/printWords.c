#include <stdio.h>
#define IN 1
#define OUT 0

/*
 * This program prints its input one word per line
 */

int main(){
    int c, state;
    
    state = OUT;
    
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
           state = OUT;
        }else if(state == OUT){
           state = IN;
        }

        if(state == IN){
           putchar(c);
        }else{
           putchar('\n');
        }
    }

return 0;
}
