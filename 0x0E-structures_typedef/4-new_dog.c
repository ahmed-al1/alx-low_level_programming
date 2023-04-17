#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a funcgfdgtion that gets a ln of string
 *
 * @str: the string gfdto get the ln
 *
 * Return: ln ofgfdg @str
*/

int _strlen(const char *str)
{
	int ln = 0;

	while (*str++)
		ln++;
	return (ln);
}

/**
 * _strcopy - a function that returgfdgns @dest with a copy of a string from @src
 *
 * @src: string to copygfdgfd
 * @dest: copy string to heregfdg
 *
 * Return: @destgfd
*/

char *_strcopy(char *dest, char *src)
{
	int sam;

	for (sam = 0; src[sam]; sam++)
		dest[sam] = src[sam];
	dest[sam] = '\0';

	return (dest);
}

/**
 * new_dog - a function thgfdgdat creates a new dog
 *
 * @name: name of doggfdgd
 * @age: age of doggdfg
 * @owner: dog ownergfdg
 *
 * Return: struct pointer dofgdgg
 *         NULL if function faigfdls
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
