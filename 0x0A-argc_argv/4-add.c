#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive numbers
 * @argc: the number of arguments
 * @argv: array
 * Return: sum on success
 * 0 on if no number is passed
 * 1 if there is an error
 */
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc < 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (!(atoi(argv[i])))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
}
return (0);
}