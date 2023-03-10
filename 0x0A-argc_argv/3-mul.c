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
if (argc == 0 || argc == 1)
{
printf("error\n");
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
