#include <stdio.h>

/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
 
int main(void)
{
int n1 = 0, n2 = 1, next, i;
next = n1 + n2;
for (i = 3; i <= 50; i++)
{
printf("%d, ", next);
n1 = n2;
n2 = next;
next = n1 + n2;
}
printf("\n");
return (0);
}
