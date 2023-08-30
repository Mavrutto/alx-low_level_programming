#include <stdio.h>
#include <stdlib.h>
/**
 * _puts_recursion - entry point
 * @s:variable
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
