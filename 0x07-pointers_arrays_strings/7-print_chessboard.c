#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - prints a chessboard
 *@a: the character to print
 */

void print_chessboard(char (*a)[8])
{

int k;
int i;

for (k = 0; k < 8; k++)
{

for (i = 0; i < 8; i++)
{

_putchar(a[k][i]);

}
_putchar('\n');

}

}

