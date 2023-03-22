#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name of user
 * @name: the input name
 * (*f): pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
