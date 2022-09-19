#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string
 *@str: the string
 *Return: No value
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);

}
