#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char a;
int n;
for (n = 0; n < 10; n++)
{
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
}
return;
}
