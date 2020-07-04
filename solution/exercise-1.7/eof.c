// Exercise 1.7
// Write a program, to print the value of EOF

#include <stdio.h>

int main()
{
  printf("EOF is %d\n", EOF);

  return 0;
}

// the default value for EOF is -1
// however, we can modify it to our desired value
// let say our desired value is -5
// #define EOF -5