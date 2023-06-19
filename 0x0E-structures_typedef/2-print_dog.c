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
if (d == NULL)
{
	printf(NULL);
}
if (name == NULL)
{
printf("Name: (nil)","Age: %d\n", "Owner: %s\n", age, owner);
}
else if (owner == NULL)
{
printf("Owner: (nil)", "Name: %s\n", "Age: %d\n", name, age);
}
else if (age == NULL)
{
printf("Age: (nil)", "Name: %s\n", "Owner: %s\n", name, owner);
}
else
{
printf("Name: %s\n", "Age: %d\n", "Owner: %s\n", name, age, owner);
}
}
