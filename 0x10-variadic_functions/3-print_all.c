#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints anything and everything
 * @format: variables of different kinds
 * Return: nil or string
 */
void print_all(const char * const format, ...)
{
int i = 0;
va_list list;
va_start(list, format);
if (format)
{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
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
				}
				break;
		}
		i++;
		if (*format)
		{
			printf(", ");
		}
	}
va_end(list);
printf("\n");
}
}
