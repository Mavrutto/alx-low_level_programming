#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches interger
 * @array: collection of numbers
 * @size:size of array
 * @cmp: pointer to function
 * Return: -1 or 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
