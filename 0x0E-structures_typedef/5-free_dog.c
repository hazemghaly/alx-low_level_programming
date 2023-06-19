#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free check the code
 * @d: 4th member
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
{
free(d->name);
}
if (d->owner)
{
free(d->owner);
}
free(d);
}
}
