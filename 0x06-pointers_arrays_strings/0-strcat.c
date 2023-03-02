#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
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
