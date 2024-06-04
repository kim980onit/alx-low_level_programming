#include "main.h"
/**
 * _mmemset - function that fil the first n bytes of memory in const byt @C
 * @s: parmeter to a poiter to the memory area to be filled
 * @b: parameter to the character to be filled in the memory area
 * @n:the number of bytse to be fillrd
 *
 * Return: a poiter to @S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
