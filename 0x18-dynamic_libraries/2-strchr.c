#include "main.h"
#include <stdio.h>
/**
 *_strchr - locates character in string
 *@s: memory area
 *@c: constant byte
 *
 * Return: value when character is found
 */

char *_strchr(char *s, char c)
{

int k = 0;

while (s[k] != '\0')
{

k++;

if (s[k] == c)
{
return (&s[k]);
}

}

return ('\0');

}
