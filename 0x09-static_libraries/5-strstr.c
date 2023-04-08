#include "main.h"
#include <stdio.h>
/**
 * *_strstr - description hfurhdk
 * @haystack: one string
 * @needle: a pointer
 * Return:the motherfucking pointer
 */


char *_strstr(char *haystack, char *needle)
{
int as, bm;

for (as = 0; haystack[as] > '\0'; as++)
{
	for (bm = as; haystack[bm] > '\0' && needle[bm - as] > '\0'; bm++)
	{
		if (haystack[bm] != needle[bm - as])
		{
			break;
		}
	}
	if (needle[bm - as] == '\0')
	{
		return (haystack + as);
	}
}
return (0);
}
