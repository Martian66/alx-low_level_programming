#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of the two diagnals of the square
 *@a: name of array
 *@size: size of array
 *
 *Return: no value
 */

void print_diagsums(int *a, int size)
{

int n = 0;
int k = size - 1;
int sum1 = 0;
int sum2 = 0;

while (n <= (size * size))
{

sum1 = sum1 + a[n];

n = n + size + 1;

}

while (k < (size * size - 1))
{

sum2 += a[k];
k = k + size - 1;

}
printf("%d, %d\n", sum1, sum2);

}
