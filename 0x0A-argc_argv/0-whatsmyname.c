#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *@argc: size of the arg array
 *@argv: An argument containing the command line arguments
 *
 *Return: Always 0
 */

void main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{

putchar(argv[i]);
}

putchar('\n);

}
