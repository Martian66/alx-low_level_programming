#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a function that returns a pointer
 *to a newly allocated space in memory
 *@str: string to copy
 *
 *Return: A pointer to the duplicate string or NULL
 */

char *_strdup(char *str)

{

unsigned int i, k;
char *s;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
	;

i++;

s = malloc(i *sizeof(char));
if (s == NULL)
{

return (NULL);

}

for (k = 0; k < i; k++)
{

s[k] = str[k];

}

return (s);

}



