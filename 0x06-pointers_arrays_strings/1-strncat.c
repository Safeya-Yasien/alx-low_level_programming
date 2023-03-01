#include <stdio.h>
#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest the destination string
 * @src the source string
 * @n number of bytes you want to concatenate
 */
char *_strncat(char *dest, char *src, int n)
{
    int length = 0, index = 0, i;

    while (dest[index++])
    {
        length++;
    }

    for (i = 0; src[i] && i < n; i++)
    {
        dest[i + length] = src[i];
    }

    return (dest);
}
