#include "function_pointer.h"
#include <stdio.h>
/**
 * print_name - function that prints the name using pointers to a function
 * @name: add string
 * @f: pointer to a function
 * Return : nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
