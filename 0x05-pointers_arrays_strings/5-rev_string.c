#include "main.h"
#include <stdio.h>

/**
 *rev_string - a function that reverses a string.
 *@s: the string
 *Return: no value
 */

void rev_string(char *s)
{

int len = strlen(s);

while (len--)
putchar(*(s + len));
putchar(10);

}
