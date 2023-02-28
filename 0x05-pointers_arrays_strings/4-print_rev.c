#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse,
 * followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
int index = 0, length = 0;
while (s[index] != '\0')
{
length++;
index++;
}
for (index = length - 1; index >= 0; index--)
{
_putchar(s[index]);
}
_putchar('\n');
}
