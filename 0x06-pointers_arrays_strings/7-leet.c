#include <stdio.h>
#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337
 *
 * @str: This is the input string
 *
 * Return: String converted to 1337
 */
char *leet(char *str)
{
int i = 0, len = 0, index = 0;
while (str[index])
{
len++;
index++;
}
for (i = 0; i < len; i++)
{
if (str[i] == 'a' || str[i] == 'A')
{
str[i] = '4';
continue;
}
else if (str[i] == 'e' || str[i] == 'E')
{
str[i] = '3';
continue;
}
else if (str[i] == 'o' || str[i] == 'O')
{
str[i] = '0';
continue;
}
else if (str[i] == 't' || str[i] == 'T')
{
str[i] = '7';
continue;
}
else if (str[i] == 'l' || str[i] == 'L')
{
str[i] = '1';
continue;
}
}
return (str);
}
