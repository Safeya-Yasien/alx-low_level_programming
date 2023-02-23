#include <stdio.h>

/**
  * main - Write a function that draws a straight line in the terminal.
  *
  * Return: zero on success
  */

void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
while (n--)
{
putchar('_');
}
putchar('\n');
return;
}
