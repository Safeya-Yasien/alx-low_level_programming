#include <stdio.h>

/**
  *  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
  *
  *@c, i, k, j variables
  *
  * Return: minutes of the day
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
putchar(c + '0');
putchar(i + '0');
putchar(':');
putchar(k + '0');
putchar(j + '0');
putchar('\n');
}
}
}
}
}
