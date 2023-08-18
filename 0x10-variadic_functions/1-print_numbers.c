#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: returns void(nothing)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
