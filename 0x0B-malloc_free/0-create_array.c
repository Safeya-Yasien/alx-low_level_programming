#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the number of bytes you need
 * @c: the specific char
 * Return: 0 if the size equal null
 * else: return the string
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
if (size == 0)
{
return (NULL);
}
char *s;
s = (char*) malloc(sizeof(char)* size);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
