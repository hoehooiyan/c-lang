// Exercise 1.2
// Experiment to find out what happens when prints' argument string contains \c, where c is some character not listed above

#include <stdio.h>

int main()
{
  printf("Hello, \cHooi Yan!\n");
  return 0;
}

// \c is an invalid escape sequence
// the complete set of escape sequences is:
// \a - alert (bell) character
// \b - backspace
// \f - formfeed
// \n - newline
// \r - carriage return
// \t - horizontal tab
// \v - vertical tab
// \\ - backslash
// /? - question mark
// \' - single quote
// \" - double quote
// \ooo - octal number
// \xhh - hexadecimal number
