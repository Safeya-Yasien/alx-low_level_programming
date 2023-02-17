#include <stdio.h>
/**
 *main - lower alphabet base 16
 *
 *print alphabet by putchar function which print without press any tab
 *
 *Return: zero of success
 */
int main(void)
{
int n = 48;
while (n <= 57)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
