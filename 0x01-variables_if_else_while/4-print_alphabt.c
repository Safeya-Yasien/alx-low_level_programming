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
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
continue;
putchar(a);
}
putchar('\n');
return (0);
}
