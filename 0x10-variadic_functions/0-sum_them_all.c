#include <stdarg.h>

/**
 * sum_them_all - adds all parameters
 * @n:arg count of input variables
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	va_start(ap, n);

	for (param = 0; param < n; param++)

		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
