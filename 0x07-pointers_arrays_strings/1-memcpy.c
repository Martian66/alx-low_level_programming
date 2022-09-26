#include "main.h"
#include <stdio.h>

/**
 *_memcpy - the function that copies the memory area
 * @src: the source
 * @dest: the memory area
 * @n: amount of bytes
 * Return: the destination value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{

dest[i] = src[i];
i++;

}

return (dest);

}
