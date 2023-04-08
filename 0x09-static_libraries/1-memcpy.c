#include "main.h"

/**
 * *_memcpy - it`s a function that will be copied
 * @dest: the dest memory area
 * @src: it equal to the source that the code will run on
 * @n: length of src tah will be copied
 *
 * Return: we will return dest as a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int bn;

	for (bn = 0; bn < n; bn++)
	{
		dest[bn] = src[bn];
	}
	return (dest);
}
