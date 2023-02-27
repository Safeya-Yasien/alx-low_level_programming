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
void print_rev(char *s)
{
int len = 0, index;
char tmp;
while (*s != '\0')
{
len++;
s++;
}
for (index = len - 1; index >= len / 2; index--)
{
tmp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
_putchar('\n');
return;
}
