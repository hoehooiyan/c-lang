// Exercise 1.4
// Write a program to print the corresponding Celsius to Fahrenheit table

#include <stdio.h>

int main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  printf("celsius\tfahr\n");
  while (celsius <= upper)
  {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf("%3.0f\t%5.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}

// Formula for the conversion from Celsius to Fahrenheit
// 1. fahr = celsius * 9 / 5 + 32
// 2. fahr = celsius * 1.8 + 32