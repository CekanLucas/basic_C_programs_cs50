#include <stdio.h>

void swap(int, int); // define reference to function here

int main(void)
{
  int a = 21;
  int b = 17;

  swap(a, b);
  printf("main: a = %d, b = %d\n", a, b);
  return 0;
}

// define function here
void swap(int a, int b)
{
  int t = a;
  a = b;
  b = t;
  printf("swap: a = %d, b = %d\n", a, b);
}

/** DECLARING MULTIPLE VARIABLES
 * You could declare variables on one line like this int a, int b;
 * But it is more readable to decalare each variable on it own line
 */

/** OUTPUT
 * swap: a = 17, b = 21
 * main: a = 21, b = 17
 * There is a bug need to use pointers as in file swap2.c
 */