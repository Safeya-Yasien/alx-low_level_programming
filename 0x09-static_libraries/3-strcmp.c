#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
int length1 = 0, length2 = 0, index1 = 0, index2 = 0, li, c = 0, r = 0;
while (s1[index1++])
{
length1++;
}
while (s2[index2++])
{
length2++;
}
if (length1 <= length2)
{
li = length1;
}
else
{
li = length2;
}
while (c <= li)
{
if (s1[c] == s2[c])
{
c++;
continue;
}
else
{
r = s1[c] - s2[c];
break;
}
}
return (r);
}

