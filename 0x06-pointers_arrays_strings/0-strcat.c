#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest the destination string
 * @src the source string
 */
char *_strcat(char *dest, char *src)
{
int index = 0, length = 0;
while (dest[index++])
{
length++;
}
for (index = 0; src[index]; index++)
{
dest[length++] = src[index];	
}
return (dest);
}
