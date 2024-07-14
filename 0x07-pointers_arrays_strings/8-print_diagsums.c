#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function tha prints the sum of the two digonals of a square
 * @size: parmeter for the size of the matrix
 * @a: second paremeter
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, size1;
	unsigned int sumDiagonal1, sumDiagonal2;

	size1 = 0;
	sumDiagonal1 = 0;
	sumDiagonal2 = 0;

	size1 = (size * size) - 1;

	for (i = 0; i <= size1; i = i + (size + 1))
	{
		sumDiagonal1 = sumDiagonal1 + a[i];
	}
	for (i = (size - 1); i < size1; i = i + (size - 1))
	{
		sumDiagonal2 = sumDiagonal2 + a[i];
	}
	printf("%d, %d\n", sumDiagonal1, sumDiagonal2);
}
