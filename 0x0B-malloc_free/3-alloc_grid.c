#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - a function that returns a pointer
 *to a 2 dimensional array of integers.
 *@width: width of array
 *@height: height of array
 *
 * Return: A double pointer
 */

int **alloc_grid(int width, int height)
{

int k, j;
int **a;

if (width <= 0 || height <= 0)
	return (NULL);
a = (int **)malloc(sizeof(int *) * height);

if (a == NULL)
	return (NULL);

for (k = 0; k < height; k++)
{
	a[k] = (int *)malloc(sizeof(int) * width);
	if (a[k] == NULL)
	{

		for (j = 0; j < k; j++)
			free(a[j]);
		free(a);
		return (NULL);

	}

for (j = 0; j < width; j++)
{
	a[k][j] = 0;

}

}

return (a);

}
