#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string in which the characters of string s are searched
 * @accept: Another string, the characters of this string are searched in s
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int len, i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = i; s[j] != '\0'; j++)
{
if (s[j] == accept[i])
{
len++;
}
}
}
return (len);
}


