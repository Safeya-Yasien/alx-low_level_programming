#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function that prints a string
 * followed by a new line
 * @s: the string which will be printed
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
putchar(*s);
_puts_recursion(++s);
}
