#include <stdio.h>

/**
  * Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
  *
  *@i, sum to add the sum on it
  *
  * Return: zero on sucess
  */
 
int main(void)
{
int i, sum = 0;
for(i = 3; i <= 1024l; i++)
{
if (i % 3 == 0)
{
sum += i;
}
if (i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}
