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
for (a = '48'; a <= '57'; a++)
{
putchar(a);
}
for (a = '97'; a <= '102'; a++)
{
putchar(a);
}  
putchar('\n');
return (0);
}
