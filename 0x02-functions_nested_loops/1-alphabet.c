#include <stdio.h>
#include <unistd.h>

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
putchar('\n');
return;
}
