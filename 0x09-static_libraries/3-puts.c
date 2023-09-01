#include "main.h"

/**
 * _puts - prints astring
 * @str: string
 * _putchar - prints
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str++);

	_putchar('\n');
}
