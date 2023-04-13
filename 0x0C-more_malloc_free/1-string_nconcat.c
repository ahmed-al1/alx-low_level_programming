#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates twosdfs strings
 * @s1: pointer to first stringsfdfs.
 * @s2: pointer to 2nd stringsfds.
 * @n: Number of bytes from n2 to concatenatefsdf.
 *
 * Return:Pointer to space in memory contafsdining concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int fer, fler, s1_ll, s2_ll;

	/*Check if the strings passefsfddsd are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length ofsdfsdf the strings*/

	for (s1_ll = 0; s1[s1_ll] != '\0'; s1_ll++)
		;

	for (s2_ll = 0; s2[s2_ll] != '\0'; s2_ll++)
		;
	/*Memory reservatsdsfsion-for case 1 & 2.*/
	st = malloc(s1_ll + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}
	/*Copy firstsdfsd string into st.*/
	for (fer = 0; s1[fer] != '\0'; fer++)
		st[fer] = s1[fer];
	/*copy sfsdfecond stringg into st.*/
	for (fler = 0; fler < n; fler++)
	{
		st[fer] = s2[fler];
		fer++;
	}

	st[fer] = '\0';
	return (st);
}
