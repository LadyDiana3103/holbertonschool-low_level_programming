#include "main.h"

/**
 * _print_rev_recursion - prototype
 * @s: pointer
 */

void _print_rev_recursion(char *s)
{
	if (*s >= '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}