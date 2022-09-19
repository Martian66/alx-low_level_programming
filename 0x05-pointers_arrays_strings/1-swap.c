#include "main.h"

/**
 *swap_int - swap two integers
 *@a:is the int we will use in the argument
 *@b:is the second int we will use in the argument
 *Return: no value
 */

void swap_int(int *a, int *b);
{

int temp = *a;

*a = *b;
*b = temp;

}

