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
int i;
while (s[i] != '\0')
{
i++;
}
i--;
while (s[i] != '\0')
{
_putchar(s[i--]);
}
_putchar('\n');
return;
}
