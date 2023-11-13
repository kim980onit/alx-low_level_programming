#include "main.h"
/**
 * _strchr - Entry point
 * @s:firstparemete input
 * @c:secondparemeter input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

