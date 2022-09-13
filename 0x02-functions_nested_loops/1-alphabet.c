#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints the alphabet, in lowercase
 * Return: void
 */

void print_alphabet(void);
{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
