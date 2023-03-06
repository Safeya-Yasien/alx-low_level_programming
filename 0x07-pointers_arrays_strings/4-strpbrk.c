#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accep: string containing the characters to match.
 * Return: pointer to the character is matched
 * else returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}

