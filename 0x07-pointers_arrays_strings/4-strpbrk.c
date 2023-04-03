#include "main.h"

/**
 * _strpbrk - it`s a function Search a string for any of a set of bytes.
 * @s: the first string in the function
 * @accept: it`s string to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found in the function and loob.
 */

char *_strpbrk(char *s, char *accept)
{
	int sa, m;
	char *pt;

	sa = 0;
	while (s[sa] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (accept[m] == s[sa])
			{
				pt = &s[sa];
				return (pt);
			}
			m++;
		}
		sa++;
	}

	return (0);
}
