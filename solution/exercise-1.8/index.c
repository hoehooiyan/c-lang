// Exercise 1.8
// Write a program to count blanks, tabs, newlines

#include <stdio.h>

int main()
{
  // tab = \t
  // newline = \n

  int c, count;
  count = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\t' || c == '\n')
      ++count;
  printf("The total count is: %d\n", count);

  return 0;
}