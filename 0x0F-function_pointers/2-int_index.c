#include <stdio.h>
#include "fuction_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: the array
 * @size: the size of array
 * @cmp: function to compare
 * Return: index on succes
 *	-1 on faild
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
