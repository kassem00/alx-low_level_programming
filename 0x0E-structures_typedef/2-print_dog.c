#include "dog.h"
/**
 * new_dog - function initialize a variable of type struct
 * @d: name of struct
 * @name: dog name
 * @age: dog age
 * @owner: ownder name
 */
void print_dog(struct dog *d)
{
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
