#include "main.h"

/**
 *string_toupper- changes all lowercase letters to uppercase
 *@str: string to be changed
 *
 * Return: address to string
 */

char *string_toupper(char *str)
{

int i = 0;

while (stri[i] != '\0')
{

if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;

}

return (str);

}