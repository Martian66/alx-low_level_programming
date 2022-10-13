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


va_list valist;
unsigned int k, sum = 0;

if (n == 0)
return (0);

va_start(list, n);
for (k = 0; k < n; k++)
{

sum += va_arg(valist, const unsigned int);
}

va_end(list);

return (sum);

}
