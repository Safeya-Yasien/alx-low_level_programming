#include <stdio.h>
/**
 *main - prints all possible different combinations of two digits.
 *
 *print alphabet by putchar function which print without press any tab
 *
 *Return: zero of success
 */
int main(void)
{
int n, m;
for (n = 0; n < 9; n++)
{
for (m = n + 1; m < 10; m++)
{
putchar(n % 10 + '0');
putchar(m % 10 + '0');
if (n != 8 &&  n != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
