#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * set_bit - setting a value as '1' to a given indx
 * @n: binary number
 * @index - where you want the the number to change
 * Return: changed binary number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int msk = 1UL << index;
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
*n |= msk;
return (1);
}
