#include <stdio.h>
/**
  * main - Write a function that checks for uppercase character.
  * Return: one if char is uppercase
  * Return: zero otherwise
  */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
