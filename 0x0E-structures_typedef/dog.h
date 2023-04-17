#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog strgfdfguct
 * @name: dog's namefdgfd
 * @age: dog's agegfdgdf
 * @owner: owner's namegfdgd
 *
 * Description: just a lone dogfdgdg struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
