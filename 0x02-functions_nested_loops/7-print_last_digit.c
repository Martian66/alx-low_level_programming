#include "main.h"
/**
 * print_last_digit - function prints the last digit of a number
 * @n: is the int that will be used for argument
 * Return: The last digit
 */
int print_last_digit(int n)
{
last_digit = n % 10;

if (last_digit < 0)
	last_digit * = 1;

_putchar(last_digit + '0');

return (last_digit);
}
