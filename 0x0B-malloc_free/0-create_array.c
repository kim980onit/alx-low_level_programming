#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: first paremeter of an input for the size of the array in int
 * @c: second paremeter store strings of the characters
 * 
 * Return:c
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
