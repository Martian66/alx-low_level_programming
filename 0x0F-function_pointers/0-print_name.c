#include "function_pointers.h"

/**
 *print_name -  a function that prints a name
 *@name: name in question
 *@f: function pointer that takes a string argument
 *
 * Return: No value
 */

void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)

f(name);
}
