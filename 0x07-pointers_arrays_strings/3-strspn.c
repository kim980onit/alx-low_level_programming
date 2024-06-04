#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter of  the string to be searched.
 * @accept: parameter of the prefix to be measured.
 *
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int nb;

	while (*s)
	{
		for (nb = 0; accept[nb]; nb++)
		{
			if (*s == accept[nb])
			{
				byt++;
				break;
			}

			else if (accept[nb + 1] == '\0')
				return (byt);
		}

		s++;
	}

	return (byt);
}
