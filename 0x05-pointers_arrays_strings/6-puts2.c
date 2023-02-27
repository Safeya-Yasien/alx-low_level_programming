#include <stdio.h>
#include "main.h"
/**
 * puts2 - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @str: the string which we will reverse it
 *
 * Return: nothing
 */
void puts2(char *str)
{
int i;
while (str[i] != '\0')
{
i++;
}
i--;
while (str[i] != '\0')
{
_putchar(str[i--]);
}
_putchar('\n');
return;
}

