#include "main.h"

/**
 * get_bit : return value of a bit at a given index
 * @n: the given number
 * @index: given index
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	mask <<= index;

	if (mask & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
