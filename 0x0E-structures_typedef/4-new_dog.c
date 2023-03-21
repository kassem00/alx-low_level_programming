#include "dog.h"
/**
 * new_dog - function initialize a variable of type struct
 * @d: name of struct
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
return (d);
}
