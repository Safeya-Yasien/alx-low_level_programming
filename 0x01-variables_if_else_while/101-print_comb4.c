#include <stdio.h>
/**
 *main - prints all possible different combinations of three digits.
 *
 *print alphabet by putchar function which print without press any tab
 *
 *Return: zero of success
 */
int main(void)
{
int n, m, l;
for (n = 0; n < 9; n++)
{
for (m = n + 1; m < 10; m++)
{
for (l = m + 1; l < 10; l++)
{
putchar(n % 10 + '0');
putchar(m % 10 + '0');
putchar(l % 10 + '0');
if (n != 8 &&  n != 9 && n != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
