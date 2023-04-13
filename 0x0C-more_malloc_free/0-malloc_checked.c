#include "main.h"

/**
 * *malloc_checked - allofsdfsfscates memory using malloc and exit if failed
 * @b: intdff
 * Return: pointer to the array dsfsdfsdfinitialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *ssaam = malloc(b);

	if (ssaam == 0)
		exit(98);

	return (ssaam);
}
