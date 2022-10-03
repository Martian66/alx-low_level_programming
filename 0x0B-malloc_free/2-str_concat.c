#include "main.h"
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: pointer to newly allocated space in memory or NULL for an error
 */

char *str_concat(char *s1, char *s2)
{

unsigned int i, k, j, n;
char *s;

if (s1 == NULL)
i = 0;

else
{

for (i = 0; s1[i]; i++)
	;
}

if (s2 == NULL)
k = 0;

else
{
for (k = 0; s2[k]; k++)
	;
}

j = i + k + 1;

s = malloc(j *sizeof(char));

if (s == NULL)
return (NULL);

for (n = 0; n < i; n++)

s[n] = s1[n];

for (n = 0; n < k; n++)

s[i + k] = '\0';

return (s);

}
