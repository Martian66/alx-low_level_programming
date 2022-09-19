#include "main.h"
/**
 *_puts - prints a string, followed by a new line
 * @str: string to be printed
 *
 *Return: no errors
 */
void _puts(char *str)
{

int i = 0;

while (*(str + i) != '\0')
{

putchar(*(str + i));
i++;

}
putchar(10);

}
