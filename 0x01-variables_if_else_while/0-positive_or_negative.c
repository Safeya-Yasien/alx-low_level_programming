#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*
*main - main randow number
*
*Return: zero on success
*
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
  if(n > 0)
    printf("%d is positive");
  else if(n < 0)
    printf("%d is negative");
  else
    printf("is zero");
	return (0);
}
