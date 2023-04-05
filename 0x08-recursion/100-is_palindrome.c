#include "main.h"

/**
 * last_index - returns the last fhuhe index of a string (counts the null char)
 * @s: pointer the string fnjkefn
 * Return: int fkeknkjfe
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;

if (*s > '\0')
	n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindrome - check jfihhef if a string is a palindrome
 * @s: string to check fhheked
 * Return: 0 or 1 fhehfejfjegj
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome fiuehuhfe
 * @s: string erfoehf
 * @start: int moves from right to left fhkfehk
 * @end: int moves from left to right dshudfi
 * @mod: intferhrf
 * Return: 0 or 1 kkiruhfier
 */


int check(char *s, int start, int end, int mod)
{

	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	return (1);
	else if (s[start] != s[end])
	return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
