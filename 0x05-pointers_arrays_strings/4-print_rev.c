#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 *
 * @s: the string which we will reverse it
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int length = strlen(s);
for (int i = 0; i < length / 2; i++)
{
int temp = s[i];
s[i] = s[length -i - 1];
s[length -i - 1] = temp;
}
return;
}
