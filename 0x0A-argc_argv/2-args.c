#include <stdio.h>

/**
 *main -  a program that prints all arguments it receives
 *@argc: number of command line arguments
 *@argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

int k;

for (k = 0; k < argc; k++)
printf("%s\n", argv[k]);

return (0);

}
