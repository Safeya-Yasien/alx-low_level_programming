#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function prints a string in reverse
 * @s: string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
putchar(*s);
}
}
