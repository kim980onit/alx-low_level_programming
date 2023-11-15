#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc:firstparameter for number of arguments
 * @argv:secondparameter for array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
