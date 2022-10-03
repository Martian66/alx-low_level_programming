#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid -  a function that frees a 2 dimensional grid
 *previously created by the alloc_grid function.
 *@grid: row of matrix
 *@height: columns of string
 *
 *Return: A  pointer to a 2 dimensional array or null
 */

void free_grid(int **grid, int height)
{

	int k;
	int *p;

for (k = 0; k < height; k++)
{

	p = grid[k];
	free(p);
}

free(grid);

}
