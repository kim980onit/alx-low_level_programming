#include "main.h"

/**
 * _strpbrk -function that searches a string for any of a set of bytes
 * @s: parmeter for the string to be searched
 * @accept: parameter for the set of butes to be searched for
 *
 * Return: pointer to the byte in s else NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int nb;

	while (*s)
	{
		for (nb = 0; accept[nb]; nb++)
		{
			if (*s == accept[nb])
				return (s);
		}

		s++;
	}

	return ('\0');
}
