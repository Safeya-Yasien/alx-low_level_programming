#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that prints a string,
 * in reverse
 *
 * @s: the string which we will reverse it
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int len = 0, index;
while (s[index++])
{
len++;
}
for (index = len - 1; index >= 0; index--)
{
_putchar(s[index]);
}
return;
}
