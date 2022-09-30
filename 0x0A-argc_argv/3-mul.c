#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

int i, j;

if (argc == 1 || argc == 2)
{

printf("Error\n");

return (1);

}

else
{

j = 1;

for (i = 1; i < 3; i++)

j *= atoi(argv[i]);

printf("%d\n", j);

}

return (0);

}
