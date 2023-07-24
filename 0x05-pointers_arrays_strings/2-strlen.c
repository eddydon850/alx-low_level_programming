#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: variable of string pointer
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;

	return (count);
}
