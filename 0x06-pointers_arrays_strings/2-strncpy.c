#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest the destination string
 * @src the source string
 * @n number of bytes you want to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
int length = 0, index = 0, i;
while (dest[index++])
{
length++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}
for (i = length; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
