#include <stdio.h>

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
int i, j, c;
if (size <= 0)
{
putchar('\n');
}
else
{
for(i = 0; i <= size; i++)
{
for (j = i; j <= size; j++)
{
putchar(' ');
}
for (c = 0; c < i; c++)
{
putchar('#');
}
putchar('\n');
}
}
}
