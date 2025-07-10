#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the owner's name
 *
 * Return: pointer to the new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int name_len = 0, owner_len = 0, i;

	if (name != NULL)
		while (name[name_len])
			name_len++;
	if (owner != NULL)
		while (owner[owner_len])
			owner_len++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		name_copy[i] = name ? name[i] : '\0';

	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner ? owner[i] : '\0';

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
