#include <string.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s the string which we will replace its chars
 * @b the char which we will put it 
 * @n the number of char we will replace
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
