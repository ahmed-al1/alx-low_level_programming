#include "main.h"

/**
 * *create_array - creates an array ofjdsfhskdjf chars,
 * and initializes it withfisdjlfhjksd a specific char.
 * @size: size of dsgjgfsdthe arrayhdfsifhg
 * @c: char to initializeshdfhjsdhf
 * Return: pointer to the array inishfhkdskftialized or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}
