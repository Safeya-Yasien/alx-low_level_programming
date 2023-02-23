#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * @c: digit to check.
 * Returns 1 if c is a digit, Otherwise return 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
