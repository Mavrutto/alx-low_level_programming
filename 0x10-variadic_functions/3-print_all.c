#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - printing everything
 * @format: list of types of operators
 * Return: void
 */
void print_all(const char * const format, ...)
{
int j = 0;
char *strr, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[j])
{
switch (format[j])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
strr = va_arg(list, char *);
if (!strr)
{
strr = "(nil)";
printf("%s%s", sep, strr);
break;
default:
j++;
continue;
}
sep = ", ";
j++;
}
}
printf("\n");
va_end(list);
}
}
