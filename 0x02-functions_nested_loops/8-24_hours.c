#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - Prints every minute of the day of Jack Bauer
  *
  * Return: ...
  */
void jack_bauer(void)
{
int c, i, k, j;
for (c = 0; c <= 2; c++)
{
for (i = 0; i <= 3; i++)
{
for (k = 0; k <= 5; k++)
{
for (j = 0; j <= 9; j++)
{
_putchar(c + '0');
_putchar(i + '0');
_putchar(':');
_putchar(k + '0');
_putchar(j + '0');
_putchar('\n');
}
}
}
}
}
