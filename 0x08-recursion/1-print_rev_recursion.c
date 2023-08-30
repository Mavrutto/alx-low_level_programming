#include <stdio.h>
#include <stdlib.h>
/**
 * _print_rev_recursion- reveersing a string
 * @s:pointer
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}

}
