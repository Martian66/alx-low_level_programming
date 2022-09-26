#include "main.h"
#include <stdio.h>

/**
 *_strspn -a function that gets the length of a prefix substring.
 *@s: pointer to string
 *@accept: pointer to string
 *
 *Return: returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

int i, j;
int k = 0;

for (i = 0; s[i] != '\0'; i++;
{

if (s[i] != 32)
{

for (j = 0; accept[j] != '\0'; j++)
{

if (s[i] == accept[j])

k++;

}

}

else


return (k);

}

return (k);


}
