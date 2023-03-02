#include <stdio.h>
#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 *
 * @str: This is the input string
 *
 * Return: String capitalized all words 
 */
char *cap_string(char *str)
{
int i, j;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
for (j = 0; sep[j] != '\0'; j++)
{
if (sep[j] == str[i])
{
break;
}
}
}
return (str);
}
