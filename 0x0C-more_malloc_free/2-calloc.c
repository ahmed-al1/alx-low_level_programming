#include "main.h"

/**
 * _calloc - allocates memrfdory for an array, initialized to 0
 * @nmemb: number of elfdfemeffdnts
 * @size: byte size of each elemfdgfdent
 *
 * Return: void pointer to array spacfdgfde
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *sam;

	if (!nmemb || !size)
		return (NULL);
	sam = malloc(nmemb * size);
	if (!sam)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		sam[nmemb] = 0;
	return (sam);
}
