#include "function_pointers.h"

/**
 * get_op_func - get an operation
 * @s: Operator
 * Return: none
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
	int x = 0;

	while (ops[x].op)
	{
		if (strcmp(s, ops[x].op) && (s[1] == '\0'))
		{
			return (ops[x].f);
		}
		x++;
	}
	return (NULL);
}
