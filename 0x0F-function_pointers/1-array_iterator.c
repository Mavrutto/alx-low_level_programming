#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a funciton
 * @array: array
 * @size:var
 * @action: function pointer
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
