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

int a, b;

a = b = 0;

if (argc == 3)
{

a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%d\n", a *b);

return (0);

}

else

printf("Error\n");

return (1);

}
