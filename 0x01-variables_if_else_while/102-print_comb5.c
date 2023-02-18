#include <stdio.h>
/**
 *main - possible combinations of two two-digit numbers
 *
 *print alphabet by putchar function which print without press any tab
 *
 *Return: zero of success
 */
int main(void)
{
int n, m;
for (n = 0; n < 99; n++)
{
for (m = n + 1; m < 100; m++)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
putchar(' ');
putchar(m / 10 + '0');
putchar(m % 10 + '0');
if (n == 98 &&  m == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
