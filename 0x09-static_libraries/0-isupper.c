#include "main.h"
/**
 * _isupper - function to check  uppercase letters
 * @c: paremeter char to check
 *
 * Return: if uppercase return 1 if not return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
