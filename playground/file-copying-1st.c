#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
  int c;

  // assign this expression to the memory
  // instead of putting it inside of the while-loop condition clause
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }

  return 0;
}