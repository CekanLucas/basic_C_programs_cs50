/* Lucas Cekan Lets do Math */

#include <stdio.h>
int main(void) {

   // gets asks user for string
   int first_number; int second_number; 
   printf("Please enter your first number >> \t");
   scanf("%d", &first_number); 
   printf("Your first number is %d\n", first_number); 
   printf("Please enter your second number >> \t");
   scanf("%d", &second_number); 
   printf("Your second number is %d\n", second_number); 
   // int answer = first_number + second_number;
   printf("%i + %i = %i\n", first_number, second_number, first_number + second_number);
   return 0; 
}