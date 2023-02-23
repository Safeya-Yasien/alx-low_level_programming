#include <stdio.h>

/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */

int main(void)
{
unsigned long n1 = 0, n2 = 1, next, i, sum;
next = n1 + n2;
while(1)
{
if (next > 4000000)
    break;
if (next % 2 == 0)
    sum += next;
n1 = n2;
n2 = next;
next = n1 + n2;
}
printf("%lu\n", sum);
return (0);
}
