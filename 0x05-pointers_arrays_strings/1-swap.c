#include <stdio.h>
/**
 * swap_int - function that swaps the values of twointegers.
 *
 * @a: first pointer to first value
 * @b: second pointer to second value
 *
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}
