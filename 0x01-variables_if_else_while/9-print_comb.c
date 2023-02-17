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
char a;
for (a = 48; a <= 57; a++)
{
putchar(a);
putchar(',');
}
putchar('\n');
return (0);
}
