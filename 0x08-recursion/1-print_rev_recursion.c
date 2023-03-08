#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_puts_recursion(s);
_putchar(*s);
}
