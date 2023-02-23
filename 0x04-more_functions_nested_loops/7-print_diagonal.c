#include <stdio.h>

/**
  * main - Write a function that draws a diagonal line on the terminal.
  *
  * Return: zero on success
  */

void print_diagonal(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
while (n--)
{
putchar('\\');
}
putchar('\n');
return;
}
