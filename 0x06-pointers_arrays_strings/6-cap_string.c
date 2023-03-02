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
int i = 0, j;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
while (str[i])
{
j = 0;
while (j < 13)
{
if ((str[i] >= 'a' && str[i] <= 'z') && (i == 0 || str[i-1] == sep[j])
{
str[i] = str[i] - 32;
}
j++;
}
i++;
}
return (str);
}
