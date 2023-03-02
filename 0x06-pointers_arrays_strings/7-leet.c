#include <stdio.h>
#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337
 *
 * @str: This is the input string
 *
 * Return: String converted to 1337
 */
char *leet(char *str)
{
int i, j;
char lower[] = {'a', 'e', 'o', 't', 'l', '\0'},
upper[] = {'A', 'E', 'O', 'T', 'L', '\0'},
numbers[] = {'4', '3', '0', '7', '1', '\0'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == lower[j] || str[i] == upper[j])
{
str[i] = numbers[j];
}
}
}
return (str);
}
