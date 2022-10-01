#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if error, 0 if successful
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
