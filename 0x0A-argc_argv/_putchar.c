#include <stdio.h>
#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c:argument to print character
*
* Return:  1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
