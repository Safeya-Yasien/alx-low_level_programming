#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: the string which we will reverse it
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int len = 0, index;
while (*s != '\0')
{
len++;
s++;
}
for (index = len - 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
return;
}
