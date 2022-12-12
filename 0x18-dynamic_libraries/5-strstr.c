#include "main.h"
#include <stdio.h>

/**
 *_strstr - locates a substring
 *
 * @haystack: the longer string to search for
 * @needle: the substring to search for
 *
 * Return: Pointer if string located or NULL if string not found
 */

char *_strstr(char *haystack, char *needle)
{

int k;
int i = 0;

while (needle[i] != '\0')
i++;

while (*haystack)
{

for (k = 0; needle[k]; k++)
{

if (haystack[k] != needle[k])

break;

}

if (k != i)

haystack++;

else

return (haystack);
}

return (NULL);

}
