#include "main.h"

[2;2R[>77;30601;0c]10;rgb:bfbf/bfbf/bfbf]11;rgb:0000/0000/0000/**
 * _puts - prints a string followed by new line
 * @str: variable pointer of str
 * Return: void(no returns)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
