#include "dog.h"
/**
 * init_dog - function initialize a variable of type struct
 * @d: name of struct
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
