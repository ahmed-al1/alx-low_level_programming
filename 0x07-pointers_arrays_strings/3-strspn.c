#include "main.h"

/**
 * _strspn - function which gets the length of a prefix substring.
 *
 * @s: it`s a string.
 * @accept: the bytes in the function.
 * Return: we will return an unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int as, ma;

	for (as = 0; s[as] != '\0'; as)
	{
		for (ma = 0; accept[ma] != s[as]; ma++)
		{
			if (accept[ma] == '\0')
				return (as);
		}
	}
	return (as);
}
