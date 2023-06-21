#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
_putchar(name);
}
/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
void (*f)(char *);
f = print_name;
(*f)(name);
return (0);
}
