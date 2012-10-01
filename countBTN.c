#include <stdio.h>
/*
 * This program counts the number of blanks, tabs, and newlines in the input 
 * text stream.
 */

main(){
   int input;
   int bc, tc, nc;

   bc=0;
   tc=0;
   nc=0;

   while((input=getchar())!=EOF){
       if(input == ' '){
          bc++;
       }else if(input == '\t'){
          tc++;
       }else if(input == '\n'){
          nc++;
       }
   }       
   printf("The number of blanks  is %d \n", bc);
   printf("The number of tabs is %d \n", tc);
   printf("The number of newlines is %d \n", nc);
}

