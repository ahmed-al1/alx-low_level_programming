#include "main.h"

/**
 * _strpbrk - y of a set of bytes.
 * @s: strin
 * @accept: string  match
 * Return: e byte in s that matches one of the bytes in accept
 * oryte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int as, ma;
	char *ptr;

	itr = 0;
	while (s[as] != '\0')
	{
		ma = 0;
		while (accept[ma] != '\0')
		{
			if (accept[ma] == s[as])
			{
				ptr = &s[as];
				return (ptr);
			}
			ma++;
		}
		as++;
	}

	return (0);
}
