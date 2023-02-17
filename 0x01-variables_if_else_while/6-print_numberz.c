#include <stdio.h>
/**
 *main - lower alphabet and upper except q and e
 *
 *print alphabet by putchar function which print without press any tab
 *
 *Return: zero of success
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
