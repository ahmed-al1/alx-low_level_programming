#include "main.h"

/**
 * factorial - it`s a function finds factorial
 * @n: intwgwr
 * Return: intwgwr
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}
