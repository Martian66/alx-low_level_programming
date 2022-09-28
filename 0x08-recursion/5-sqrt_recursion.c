#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *@n: int to find square root of
 *
 *Return: Natural square root or -1
 */

int _sqrt_recursion(int n)

{

if (n == 0)

return (0);

return (sqrt_check(1, n));

}
