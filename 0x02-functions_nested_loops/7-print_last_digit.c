#include <stdio.h>

/**
  * print_last_digit n -  prints the last digit of a number.
  *
  * Return: last digit of number
  */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
return (n * -1);
}
return (n % 10);
}
