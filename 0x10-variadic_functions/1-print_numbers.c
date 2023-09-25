#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - functios that prints numbers
 * @separator: string to be printed between numbers
 * @n: list of numbers
 * @...: many numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
int numbers = va_arg(list, int);
printf("%d", numbers);

if (separator != NULL && i < n)
{
printf("%s", separator);
}
}
va_end(list);
printf("\n");
}
