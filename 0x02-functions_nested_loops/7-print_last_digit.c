#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number
 * @nld: is the int that will be used for argument
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
int pld;

if (pld < 0)
{
	pld = (-1 * pld);
}
_putchar(pld + '0');
return (pld);
}
