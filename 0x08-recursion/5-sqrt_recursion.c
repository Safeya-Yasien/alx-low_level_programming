#include <stdio.h>
#include "main.h"
/**
 * _find_sqrt - find the sqrt of number
 * @num: the number
 * @root: the root of number
 * Return: sqrt of a number
 */
int _find_sqrt(int num, int root)
{
if (root * root == num)
{
return (root);
}
else if (root * root > num)
{
return (-1);
}
return (_find_sqrt(num, root + 1));
}
/**
 * -sqrt_recursion - return natrual squar of a nubmer
 * @n: the number to return the square
 * Return: if n is natural return n
 * if n doesn't have natural return -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
return (_find_sqrt(n, 1));
}
