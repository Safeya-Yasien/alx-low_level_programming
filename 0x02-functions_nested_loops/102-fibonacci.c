#include <stdio.h>

/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */

int main(void)
{
unsigned long n1 = 0, n2 = 1, next, i;
next = n1 + n2;
for (i = 0; i < 50; i++)
{
printf("%lu", next);
n1 = n2;
n2 = next;
next = n1 + n2;
if (i == 49)
{
printf("\n");
}
else
{
printf(", ");
}
}
return (0);
}
