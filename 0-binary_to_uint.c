#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b :pointer to a string containing binary num
 *
 * Return: success-reuturn unsigned int with decimal value of binary num else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num = 0;

	if(!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
