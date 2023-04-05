#include "main.h"

/**
 * move_past_star - iterates past fokeopfkeasterisk
 * @s2: the second strifkrejiofjerng, can contain wildcard
 *
 * Return: the pointehier past star
 */
char *move_past_star(char *s2)
{
	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - makes magic a realityfrejrfjerf
 * @s1: the first stringfjerifjef
 * @s2: the second string, can cokfeopjpejpntain wildcard
 *
 * Return: 1 if identical, 0 if falsefehorfore
 */
int inception(char *s1, char *s2)
{
	int mn = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		mn += wildcmp(s1 + 1, s2 + 1);
	mn += inception(s1 + 1, s2);
	return (mn);
}

/**
 * wildcmp - compares twofjsjfjls strings lexicographically
 * @s1: the first dfnhksfstring
 * @s2: the second string, can cokflo;dskfntain wildcard
 *
 * Return: 1 if identical, 0 if falsefjdsoijfod
 */
int wildcmp(char *s1, char *s2)
{
	int mn = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			mn += wildcmp(s1 + 1, s2 + 1);
		mn += inception(s1, s2);
		return (!!mn);
	}
	return (0);
}
