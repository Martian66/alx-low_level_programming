#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *op_add - addition operator
 *@a: first int
 *@b: second int
 *
 * Return: sum of the two ints
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtraction operator
 *@a: first int
 *@b: second int
 *
 *Return: subtraction of two ints
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - product of 2 numbers
 * @a: first int
 * @b: second int
 *
 * Return: product of two ints
 */

int op_mul(int a, int b)
{
return (a * b);

}

/**
 *op_div - divide two ints
 *@a: first int
 *@b: second int
 *
 * Return: divide two ints
 */

int op_div(int a, int b)
{
return (a / b);

}

/**
 * op_mod - modulo operation
 * @a: first int
 * @b: second it
 *
 * Return:  modulus of two ints
 */

int op_mod(int a, int b)
{
return (a % b);

}
