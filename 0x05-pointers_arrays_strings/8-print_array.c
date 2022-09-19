#include "main.h"
#include <stdio.h>

/**
 *print_array - a function that prints n elements of an array of integers,
 *@n: number of elements
 *@a: number of elements
 *Return: no value
 */

void print_array(int *a, int n)
{

int inc;

for (inc = 0; inc < n ; inc++)
{

if (inc != n - 1)
printf("%d, ", a[inc]);

else

printf("%d", a[inc]);
}
putchar(10);

}
