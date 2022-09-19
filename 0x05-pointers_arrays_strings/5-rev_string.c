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

while (*(s + len) != '\0')
	len--;

return (len);

}
