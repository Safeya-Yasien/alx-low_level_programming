#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print diferent data types
 * @format: list of types
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str = "(nil)";
	char *temp = NULL;
	char *separator = ", ";
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				temp = va_arg(args, char *);
				if (temp == NULL)
				{
					temp = str;
				}
				printf("%s", temp);
				break;
			default:
				i++;
				continue;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c'
					|| format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
