#include <stdio.h>

/**
 * main -prints all arguments passed to it
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

argv[0] = 0;

printf("%d\n", argc - 1);

return (0);

}
