#include "main.h"

/**
 * _strcat - functions that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

c = 0;
/* sizr of dest array*/
while (dest[c])
	c++;
/* iterate src array*/
for (c2 = 0; src[c2]; c2++)
	/*append src[c2] to dest[c]*/
	dest[c++] = src[c2];
return (dest);
}
