#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
int index = 0, len = 0;
while (s[index++])
{
len++;
}
for (index = 0; index < len; index += 2)
{
_putchar(s[index]);
}
_putchar('\n');
}
