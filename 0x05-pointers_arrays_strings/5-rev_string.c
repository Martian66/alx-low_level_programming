#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *rev_string - a function that reverses a string.
 *@s: the string
 *Return: no value
 */

void rev_string(char *s)
{

int i = 0, j = 0;
char str[500];

while (*(s + i))
{
*(str + i) = *(s + i);
i++;

}

i = i - 1;
while (i >= 0)
{

*(s + i) = *(str + j);

j++;
i--;

}

}
