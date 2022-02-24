#include "main.h"

/**
 * _sqrt_recursion - prototype
 * @n: number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)  /*validando que no sea negativo.. sino return -1*/
		return (-1);
	else if
	{
		return (prototype(n, i));
	}
}

/**
 *  prototype - función
 *  @n: variable
 *  @i: variable
 *  Return: Prototype
 */

int prototype(int n, int i)

{
	if ((i * i) == n)  /* n = i * i */
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	i++;
	return (prototype(n, i));
}
