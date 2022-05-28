/* Lucas Cekan Get user input */

#include <stdio.h>
int main(void) {

   // gets asks user for string
   printf("Please type input here >> \t");
   char str[20]; 
   fgets(str, 20, stdin); 
   printf("Your typed input is: %s\n", str); 
   return 0; 
}