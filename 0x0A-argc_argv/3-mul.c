#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multipulaction of number
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
int i, sum = 1;
if (argc == 1 || argc == 2)
{
printf("Error\n");   
}
else
{
for (i = 1; i < 3; i++)
{
sum *= atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}