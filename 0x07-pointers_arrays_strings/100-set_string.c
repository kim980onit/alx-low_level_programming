#include "main.h"
/**
 * set_string  - function that set the value of a pointer to a char
 * @s: first parmeter to the pointer to change
 * @to: second paremeter for the string to change pointer to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
