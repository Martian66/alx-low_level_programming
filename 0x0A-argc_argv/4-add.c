#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if a non-integer is among the passed in arguments, else 0
 */

int main(int argc, char *argv[])
{

int total, i;
char *p;
int num;

total = 0;
if (argc > 1)
{

for (i = 1; argv[i]; i++)

{
num = strtol(argv[i], &p, 10);
if (!*p)

total += num;

else

{

printf("Error\n");

return (1);

}

}

}

printf("%d\n", total);

}
