#include <stdio.h>
/*
 *I used this program to check the return value of (c=getchar())!=EOF)
 *and the value of EOF
 */

main(){
   int input;
   
   while((input=getchar())!=EOF){
      printf("The integer value of input!=EOF is: %d \n", (input!=EOF));
   }
   
   printf("The integer value of input!=EOF is: %d \n", (input!=EOF));
   printf("The integer value of EOF is %d \n", EOF);
}
