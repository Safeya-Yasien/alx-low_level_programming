#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr:a pointer to the memory previously allocated
 * 	with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *old = ptr;
int i;
if (ptr == NULL)
{
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
return (p);
}
if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
p = malloc(new_size);
if (p == NULL)
{
free(ptr);
return (NULL); 
}
if (new_size == old_size)
{
new_size = old_size;
}
for (i = 0; i < new_size; i++)
{
p[i] = old[i];
}
free(ptr);
return (p);
}
