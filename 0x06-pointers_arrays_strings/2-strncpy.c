#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int length = 0, index = 0, i;
while (src[index])
{
length++;
index++;
}
printf("%d", length);
printf("\n%d\n", index);
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
