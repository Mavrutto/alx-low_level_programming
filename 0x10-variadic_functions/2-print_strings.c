#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>


/**
 * print_strings - printing stringss
 * @separator: string btwn strings
 * @n: couple of variables
 * @...: many more variables
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
char *strr;
unsigned int index;
va_start(list, n);
for (index = 0; index < n; index++)
{
strr = va_arg(list, char *);
if (strr == NULL)
printf("(nil)");
else
printf("%s", strr);
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
