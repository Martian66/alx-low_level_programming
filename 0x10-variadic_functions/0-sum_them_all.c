#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - return the sum of all its parameters
 *@n: number of parameters
 *
 *Return: total sum
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int k;
va_list list;
int sum;

va_start(list, n);
for (k = 0; sum = 0; k < n; k++)

sum += va_arg(list, int);

va_end(list);

return (sum);

}
