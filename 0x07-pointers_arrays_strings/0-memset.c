#include "main.h"

/**
 * *_memset - it replace the funcion with n bytes.
 * @s: pointer to put the constant and set it
 * @b: constant don`t inraese
 * @n: The max bytes to use
 * Return: pointer of kind s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int as;

	for (as = 0; n > 0; as++, n--)
	{
		s[as] = b;
	}

	return (s);
}
