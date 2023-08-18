#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array pointer
 * @size: the size of @array
 * @cmp: pointer to function call to check
 * index in array if it matches
 * Return: Always 0(success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int start;
	bool x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (start = 0; start < size; start++)
		{
			x = cmp(array[start]);
			if (x == TRUE)
				return (start);
		}
	}

	return (-1);

}
