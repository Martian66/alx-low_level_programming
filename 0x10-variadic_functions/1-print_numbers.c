#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints strings
 *@separator: string to be printed between string
 *@n: number of strings passed to function
 *
 *Return: No return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;
int num;
va_list valist;

va_start(valist, n);
for (i = 0; i < n; i++)
{
num = va_arg(va_list, int)
printf("%d", num);

if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
