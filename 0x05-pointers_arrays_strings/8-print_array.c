#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * followed by a new line.
 * @a: input array
 * @n: number of elements
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n-1; i++)
{
printf("%d, ", a[i]);
}
printf("%d", a[n-1]);
return;
}
