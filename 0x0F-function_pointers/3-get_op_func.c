#include "3-cal.h"

/**
 * get_op_func - selects the correct function to perform.
 *
 * @s: pointer to function.
 */
int (*get_op_func(char *s))(int, int)
{
	if (!strcmp("+", s))
		return (op_add);
	if (!strcmp("+", s))
		return (op_sub);
	if (!strcmp("+", s))
		return (op_div);
	return (op_mod);
}
