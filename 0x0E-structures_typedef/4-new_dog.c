#include <stdlib.h>
#include <string.h>
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

	/* Allocate memory for the dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate and copy name */
	if (name != NULL)
	{
		name_copy = strdup(name);
		if (name_copy == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	}
	else
	{
		name_copy = NULL;
	}

	/* Allocate and copy owner */
	if (owner != NULL)
	{
		owner_copy = strdup(owner);
		if (owner_copy == NULL)
		{
			free(name_copy);
			free(new_dog);
			return (NULL);
		}
	}
	else
	{
		owner_copy = NULL;
	}

	/* Initialize the dog structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
