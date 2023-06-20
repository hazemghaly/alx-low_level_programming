#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen -  lrngth of string
 * @s: first number
 * Return: 0 (scuess)
 */
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
/**
 * *_strcpy - writes the string
 *@dest : first number
 *@src : second number
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
/**
 * *new_dog - new int
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *Dog;
if (name == NULL || owner == NULL || age < 0)
{
return (NULL);
}
Dog = (dog_t *)malloc(sizeof(dog_t));
if (Dog == NULL)
{
return (NULL);
}
Dog->name = malloc(sizeof(char) * _strlen(name) + 1);
Dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
if (Dog->name == NULL)
{
free(Dog);
return (NULL);
}
if (Dog->owner == NULL)
{
free(Dog->name);
free(Dog);
return (NULL);
}
Dog->name = _strcpy(Dog->name, name);
Dog->owner = _strcpy(Dog->owner, owner);
Dog->age = age;
return (Dog);
}
