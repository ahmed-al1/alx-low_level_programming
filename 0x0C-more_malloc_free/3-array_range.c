#include "main.h"

/**
 * array_range - creates anfsdf array of integers
 * @min: starting intfsdfds
 * @max: max intsfdsd
 * Return: array sfddsof integers
 */
int *array_range(int min, int max)
{
	int len, sam;
	int *pt;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	pt = malloc(sizeof(int) * len);
	if (!pt)
		return (NULL);
	for (sam = 0; sam < len; sam++)
		pt[sam] = min++;
	return (pt);
}
