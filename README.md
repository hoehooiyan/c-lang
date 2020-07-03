# Learning C Programming Language

For the ease to learn C programming language, it is recommended to use UNIX operating system.

I use Linux OS in this case.

## How to run the program in c?

Say we have this code as shown below:

```c
// hello.c

#include <stdio.h>

int main ()
{
  printf("Hello, World!\n");
  return 0;
}
```

1. Create a program has a file name ends with `.c`. For example: `hello.c`.
2. Compile the program with this command - `cc hello.c`.
3. An executable file called `a.out` will be created once the compilation is done successfully.
4. Run the program by typing `./a.out`.
5. "Hello, World" will be the output.
