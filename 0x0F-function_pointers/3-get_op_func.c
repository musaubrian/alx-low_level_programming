#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 *
 * @s: The operator passed as argument.
 *
 * Return: Pointer to the function.
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

	int num = 0;

	while (ops[num].op != NULL && *(ops[num].op) != *s)
		num++;

	return (ops[num].f);
}
