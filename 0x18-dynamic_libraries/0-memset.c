#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills memory with constant byte
 *@n: bytes of memory
 *@s:memory area
 *@b: constant byte
 *
 * Return: memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int k = 0;

while (k < n)
{

s[k] = b;
k++;

}

return (s);

}
