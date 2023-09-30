#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_bit - return the value of a bit
 * @n: binary
 * @index: placeholder of the binry
 * Return: value of bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
	return (-1);
bit_value = (n >> index) & 1;
return (bit_value);
}
