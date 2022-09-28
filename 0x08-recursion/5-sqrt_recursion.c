#include "main.h"
#include <stdio.h>


/**
 *sqrt_check - checks for the square root
 *@c: number to find square root of
 *@g: guess at square root
 *
 *Return: square root or -1
 */

int sqrt_check(int g, int c)

{

if (g * g == c)

return (g);

if (g * g  > c)

return (-1);

return (sqrt_check(g + 1, c));

}



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
