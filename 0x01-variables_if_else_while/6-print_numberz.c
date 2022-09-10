#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Description: using the main function
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
