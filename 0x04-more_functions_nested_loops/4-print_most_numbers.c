#include <stdio.h>
#include "main.h"

/**
 *print_most_numbers - print numbers except 2 and 4
 *
 *Return: return no value
 */

void print_most_numbers(void)
{
int k;

for (k = 48; k < 58; k++)
if ((k == 50) || (k == 52))
{

continue;
}
putchar(k);
}
putchar(10);
}
