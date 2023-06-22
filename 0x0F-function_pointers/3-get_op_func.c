#include <stdio.h>
#include "main.h"
/**
 * get_op_func - get operater
 * @a: first int
 * @b: 2nd int
 * Return: Nothing.
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
int i;
(*get_op_func[])(int, int) = {+, -, *, /, %};
if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%')
{
return (NULL);
}
get_op_func[s](a, b);
return (0);
}
