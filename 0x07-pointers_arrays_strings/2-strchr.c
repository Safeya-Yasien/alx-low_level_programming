#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 * @s the string which will searced in it
 * @c the char which will be searced on it
 * Return: pointer to the first occurrence of the character c in the string
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
