#include <stdio.h>
#include "main.h"

/**
 * main - main function that print the number of
 * arguments passed to the program
 * @argc: firstparameter for number of arguments
 * @argv: secondparameter for array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
