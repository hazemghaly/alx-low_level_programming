#include <stdio.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: 4th member
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
