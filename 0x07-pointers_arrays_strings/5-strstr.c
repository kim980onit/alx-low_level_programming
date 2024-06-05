#include "main.h"

/**
 * _strstr -function that find the location of a substring
 * @haystack: paremeter to search for string
 * @needle: paremeter of the substring to be located.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int nb;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		nb = 0;

		if (haystack[nb] == needle[nb])
		{
			do {
				if (needle[nb + 1] == '\0')
					return (haystack);

				nb++;

			} while (haystack[nb] == needle[nb]);
		}

		haystack++;
	}

	return ('\0');
}
