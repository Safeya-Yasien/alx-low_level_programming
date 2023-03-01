#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest the destination string
 * @src the source string
 */
char *_strcat(char *dest, char *src)
{
int length = 0, index = 0, i;
while (dest[index++])
{
length++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[i + length] = src[i];
}
dest[i + length] = '\0';
return (dest);
}
