#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - printing a name variable
 * @name: char var
 * @f:pointer
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
        if (name == NULL || f == NULL)
        {
                return;
        }
        f(name);
}
