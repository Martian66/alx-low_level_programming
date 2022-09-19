#include "main.h"
/**
 * puts_half - The function should print the second half of the string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
int n, i = 0;

while (*(str + i))
i++;

n = i / 2;
if (i % 2)

n += 1;

while (n < i)
{
_putchar(*(str + n));
n++;

}

_putchar('\n');

}
