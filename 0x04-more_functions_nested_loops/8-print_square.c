#include <stdio.h>

/**
  * main - Write a function that prints a square, followed by a new line.
  *
  * Return: zero on success
  */

void print_square(int size)
{
int i, j;
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}
}
