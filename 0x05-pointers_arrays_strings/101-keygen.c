#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *main - entry point
 *Description - password generator
 *
 * Return: Generated password
 */

int main(void)
{

char c;
int x;

srand(time(0));

while (x <= 2645)
{

c = rand() % 128;
x += c;

putchar(c);

}

putchar(2772 - x);

return (0);

}