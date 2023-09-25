#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_strings - prints a string
 * @separator: string to be printed
 * @n: arguments
 * @...: many arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
	const char *strr = va_arg(list, const char *);
	if (strr != NULL)
	{
		printf("%s", strr);
	}
	else
	{
		printf("(nil)");
	}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
}
va_end(list);
printf("\n");
}
