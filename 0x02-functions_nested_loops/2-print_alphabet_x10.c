#include "main.h"
/**
 * print_alphabet_x10 - function prints aphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c, n;

	for (n = 0; n <= 9; n++)
{
	for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
	putchar('\n');
}
