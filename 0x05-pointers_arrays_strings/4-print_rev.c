#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to variable s
 * Return: void(no returns)
 */

void print_rev(char *s)
{
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
