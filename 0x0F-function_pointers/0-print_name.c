#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.....
 * @name:strvar
 * @f:pointer
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
