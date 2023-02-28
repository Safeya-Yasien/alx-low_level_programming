#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
int index = 0, length = 0;
while (*s != '\0')
{
length++;
s++;
}
for (index = length - 1; index >= 0; index--)
{
_putchar(s[index]);
s--;
}
_putchar('\n');
}
