#include <stdio.h>

/* copy input to output; 2nd version */
int main()
{
  int c;

  // put the expression directly inside of the while-loop condition clause
  while (c = getchar() != EOF)
    printf("%d\n", c);
  printf("%d - at EOF\n", c);

  return 0;
}