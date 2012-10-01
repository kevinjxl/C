#include <stdio.h>

/*
 * This program replaces each tab by \t, each backspace by \b, each backslash by * \\.
 */

int main(){
    int c;
    
    while((c = getchar()) != EOF){
       switch(c){
         case '\t':
             putchar('\\');
             putchar('t');
         case '\b':
             putchar('\\');
             putchar('b');
         case '\\':
             putchar('\\');
             putchar('\\');
         default:
             putchar(c);
       }
    }

return 0;
}
