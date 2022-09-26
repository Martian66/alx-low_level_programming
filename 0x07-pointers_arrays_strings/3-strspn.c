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

int count = 0;
int i = 0;
int j = 0;

while (s[i] != '\0')
{

while (accept[j] != '\0')
{

if (accept[j] == s[i])
{

count++;

}

i++;
}

j = 0;

i++;

if (s[i] == ' ')
{
break;
}
}

return (count);

}
