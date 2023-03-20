#ifndef STR_H
#define STR_H

/**
 * struct dog - dog bass
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
