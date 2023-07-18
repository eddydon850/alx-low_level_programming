#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the a
 * lphabet, in lowercase, followed by
 * Return - void,no return
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
