#include "main.h"
#include <stdio.h>

/**
 *_strcat - a function that concatenates two strings.
 *@src: string to be appended
 *@dest: String to be used
 *
 *Return: A pointer
 */

char *_strcat(char *dest, char *src)
{

char src[20], dest[20];

strcat(dest, src);

putchar(dest);

putchar('\n');

return (0);

}
