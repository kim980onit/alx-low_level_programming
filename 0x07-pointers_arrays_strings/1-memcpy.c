#include "main.h"

/**
 * _memcpy -function that Copies @n bytes from the memory area.
 * @dest:parameter to the pointer to the memory area to copy @src into
 * @src: parameter to the source buffer to copy char from.
 * @n:parameter to the number of bytes to copy from @src
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int nb;
	char *dst = dest;
	char *source = src;

	for (nb = 0; nb < n; nb++)
		dst[nb] = source[nb];

	return (dest);
}
