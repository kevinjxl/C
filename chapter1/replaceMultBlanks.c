#include <stdio.h>

/*
 * This program replace multiple blanks in the input to be
 * a single blank
 */

int main(){
    int c;
    
    while( (c = getchar()) != EOF){
        if(c == ' '){
           while((c = getchar()) == ' ' && (c = getchar()) != EOF);
        }
        
        if(c == EOF) break;
         
        putchar(c);
    }

return 0;
}

