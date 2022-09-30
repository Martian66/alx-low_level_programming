#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if error, 0 if successful
 */

int main(int argc, char *argv[])

{

(void) argc;

if (argv[1] && argv[2])
{

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);

}

else

printf("Error\n");

return (1);

}
