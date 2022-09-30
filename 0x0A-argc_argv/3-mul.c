#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

int k, m;

if (argc == 1 || argc == 2)
{

printf("Error\n");

return (1);

}

else
{

m = 1;

for (k = 1; k < 3; k++)

m *= atoi(argv[i]);

printf("%d\n", m);

}

return (0);

}
