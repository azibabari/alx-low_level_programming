#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char pointer argument and returns void
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
