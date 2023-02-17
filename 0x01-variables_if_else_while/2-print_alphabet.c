#include <stdio.h>
/**
 *main - lower alphabet
 *
 *
 *print alphabet by putchar function which print without press any tab
 *
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
