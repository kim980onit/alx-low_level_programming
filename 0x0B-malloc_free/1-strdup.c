#include "main.h"
#include <stdlib.h>

/**
* _strdup - function that returns a pointer to newly allocated space in memory
*
* @str: parameter that is the input string
*
* Return: pointer to a new copy of the input string
*/

char *_strdup(char *str)
{
	size_t i, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	strdout = (char *)malloc(sizeof(char) * (i + 1));
	if (strdout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		strdout[j] = str[j];
	}

	strdout[i] = '\0';
	return (strdout);
}

