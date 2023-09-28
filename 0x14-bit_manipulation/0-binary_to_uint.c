#include "main.h"
#include <stddef.h>

/**
 * binary_to_unit - converts a binary number to unsgned int..
 * @B: pointer of strVar..
 * Return: converted no. or null
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int rslt = 0;
if (b == NULL)
	return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
	return (0);
rslt = rslt * 2 + (*b - '0');
b++;
}
return (rslt);
}
