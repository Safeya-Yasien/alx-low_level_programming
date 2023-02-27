#include "main.h"
/**
 * puts_half -  function that prints half of a string
 * followed by a new line.
 * @str: input string to print.
 */
void puts_half(char *str)
{
int index = 0, len = 0;
while (str[index++])
{
len++;
}
len--;
for (index = (len / 2); index < len; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
