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
	unsigned int as, bm;

	for (as = 0; s[as] != '\0'; as++)
	{
		for (bm = 0; accept[bm] != s[as]; bm++)
		{
			if (accept[bm] == '\0')
				return (as);
		}
	}
	return (as);
}
