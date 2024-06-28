#include "variadic_functions.h"
#include <strdarg.h>

/**
 * sum_them_all - function that returns the sum of all its paremeter
 * @n: number of parameter passed
 * @...: number of parameters to be calculated
 *
 * Return: if n == 0 -0 else  the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, sum = 0;

	va_start(vl, n);

	for ( i = 0; i < n; i++)
		sum += va_arg(vl, int);

	va_end(vl);

	return (sum);
}
