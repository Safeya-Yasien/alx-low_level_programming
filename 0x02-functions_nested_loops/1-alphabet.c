#include <stdio.h>
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a;
for(a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return;
}
