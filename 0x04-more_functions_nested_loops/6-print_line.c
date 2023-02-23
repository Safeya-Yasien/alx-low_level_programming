#include <stdio.h>

/**
  * main - Write a function that draws a straight line in the terminal.
  *
  * Return: zero on success
  */

void print_line(int n)
{
while (n--)
{
putchar('_');
}
putchar('\n');
return;
}
