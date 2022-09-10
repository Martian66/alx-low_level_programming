#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Description: using the main function
 * Return: Always 0
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
