#include "main.h"

/**
 * _strchr -function that locates a char in a string
 * @s: first parmeter for the string to be searched.
 * @c: second  parmeter for the character to be located
 *
 * Return: c else NULL
 */
char *_strchr(char *s, char c)
{
	int nb;

	for (nb = 0; s[nb] >= '\0'; nb++)
	{
		if (s[nb] == c)
			return (s + nb);
	}
	return ('\0');
}
