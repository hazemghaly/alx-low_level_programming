#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print
 * @d: 4th member
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
else if (d->owner == NULL)
{
printf("Owner: (nil)\n");
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
}
else
{
printf("Age: %f\n", d->age);
printf("Name: %s\n", d->name);
printf("Owner: %s\n", d->owner);
}
}
}
