#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - function to sum all it's parameters
  * @n: number of integers to sum
  * Return: sum or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
