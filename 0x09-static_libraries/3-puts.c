#include "main.h"

/**
 * _puts - function that prints a string stdout
 * @str: paremeter
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
