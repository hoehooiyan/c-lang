// Exercise 1.3
// Modify the temperature conversion program to print a heading above

#include <stdio.h>

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;   // lower limit of temperature scale
  upper = 300; // upper limit
  step = 20;

  fahr = lower;

  printf("fahr\tcelsius\n");
  while (fahr <= upper)
  {
    celsius = (fahr - 32.0) * (5.0 / 9.0); // first method of the formula given
    printf("%3.0f\t%5.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}

// Formula for the conversion from Fahrenheit to Celsius
// 1. celsius = (fahr - 32) * (5 / 9)
// 2. celsius = (fahr - 32) / (9 / 5)
// 3. celsius = (fahr - 32) / 1.8