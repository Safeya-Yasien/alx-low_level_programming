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
int length = 0, index = 0, i;
while (dest[index++])
{
length++;
}
for (i = 0; src[i]; i++)
{
dest[i + length] = src[i];
}
return (dest);
}
