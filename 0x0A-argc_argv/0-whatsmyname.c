#include <stdio.h>
#include "main.h"

/**
* main - the main function that prints the name of the program
* @argc: firstparemeter number of arguments
* @argv: secondparemeter array of arguments
*
* Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
