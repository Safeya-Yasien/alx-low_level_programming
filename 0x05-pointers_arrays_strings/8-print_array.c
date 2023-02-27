#include "main.h"
#include <stdio.h>
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
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == (n - 1))
{
continue;
}
printf(", ");
}
printf("\n");
return;
}
