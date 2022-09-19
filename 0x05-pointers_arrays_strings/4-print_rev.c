#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_rev - prints a string in reverse
 *@s: string to reverse
 *Return: no value
 */

void print_rev(char *s)
{

int len = strlen(s);

while (len--)
putchar(*(s + len));

putchar(10);

}
