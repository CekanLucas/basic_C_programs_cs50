/** 2nd attempt at swap
 * with pointers
 */

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
  int a = 21;
  int b = 17;

  swap(&a, &b);
  printf("main: a = %d, b = %d\n", a, b);
  return 0;
}

void swap(int *pa, int *pb)
{
  int t = *pa;
  *pa = *pb; // note pa = pb will assign the VALUES at pa and pb not the pointers
  *pb = t;
  return;
}

/** POINTERS
 * we use indirection (*) operator to both declare pointers and deference them
 * we declare pa and pb as type pointers to int
 */