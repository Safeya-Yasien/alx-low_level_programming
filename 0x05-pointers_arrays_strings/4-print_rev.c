#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: the string which we will reverse it
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int length = 0, i;
while (*s != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
return;
}
