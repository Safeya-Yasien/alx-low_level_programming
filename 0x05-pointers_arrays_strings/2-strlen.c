#include <stdio.h>
#include "main.h"
/**
 * _strlen -  function that returns the length of a string.
 *
 * @s: the string which we will get length of it
 *
 * Return: length of string
 */
int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
