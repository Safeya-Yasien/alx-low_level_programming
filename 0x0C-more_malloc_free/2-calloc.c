#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: the sizeof memory
 * @size: number of blocks
 * Return: address of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int index;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (index = 0; index < nmemb * size; index++)
{
ptr[index] = 0;
}
return (ptr);
}
