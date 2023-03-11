#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * changes- Helper function that does all the mathematics
 * @cents: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int changes(int cents)
{
int two_five = (cents) / 25;
int ten = (cents % 25) / 10;
int five = (((cents) % 25) % 10) / 5;
int two = ((((cents) % 25) % 10) % 5) / 2;
int one = (((((cents) % 25) % 10) % 5) % 2) / 1;
return ("%d\n", two_five + ten + five + two + one);
}
/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int i = atoi(argv[1]);
if (i < 0)
{
printf("0\n");
}
else
{
int coin = changes(i);
printf("%d\n", coin);
}
return (0);
}
