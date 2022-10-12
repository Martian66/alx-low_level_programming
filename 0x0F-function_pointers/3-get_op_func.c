#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_op_func - select the correct operation function asked by user
 *@s: operator argument
 *
 *Return: function pointer
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}

};

int k;
k = 0;

while (k < 5)
{
if (ops[k].op[0] == s[0])
return (ops[k].f);

k++;

}

return (NULL);
}
