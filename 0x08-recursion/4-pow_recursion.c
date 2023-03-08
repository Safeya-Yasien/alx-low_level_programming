#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - power of nubmer
 * @x: the base
 * @y: the power
 * Return: power of nubmer
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (x == 1)
{
return (1);
}
else if (y == 0)
{
return (x);
}
return (x * _pow_recursion(x, (y - 1)));
}
