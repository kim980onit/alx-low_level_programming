#include "main.h"
/**
 *_memcpy - a function that copies memory area
*@dest:firstparemeter memory where is stored
*@src:secondparemeter memory where is copied
*@n:thirdparemeter number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
