#include "main.h"
#include <stdio.h>
/**
 *factorial - returns factorial of a number
 *@n: integer to get factorial from
 *
 *Return: factorial value
 */

int factorial(int n)
{

if (n < 0)

return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1));

}
