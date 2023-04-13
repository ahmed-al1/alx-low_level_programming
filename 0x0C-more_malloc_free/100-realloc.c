#include "main.h"

/**
 * *_realloc - allocatfsfsdes a memory block using malloc and free.
 * @ptr: pointer to memory sdfsfallocated with malloc(old_size).
 * @old_size: size in bytes, of sfdfsdthe allocated space for ptr
 * @new_size: size in bytes of the newfsdfs memory block.
 *
 * Return: NULL if new_size = 0 and ptr is fdsfnot NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *dam;
	unsigned int sam;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		dam = malloc(new_size);
		if (dam == NULL)
			return (NULL);
		return (dam);
	}
	if (new_size > old_size)
	{
		dam = malloc(new_size);
		if (dam == NULL)
			return (NULL);
		for (sam = 0; sam < old_size && sam < new_size; sam++)
			*((char *)dam + sam) = *((char *)ptr + sam);
		free(ptr);
	}
	return (dam);
}
