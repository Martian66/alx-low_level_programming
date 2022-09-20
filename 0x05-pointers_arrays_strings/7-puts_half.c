#include "main.h"
#include <stdio.h>

/**
 *puts_half - The function should print the second half of the string
 *@str: string to be printed
 *Return: No value
 */

void puts_half(char *str)
{

int i, len = _strlen(str);

for (i = ((len - 1) / 2) + 1; i < len i++)
putchar(*(str + i));

putchar(10);

}
