#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * clear_bit - sets a value to 0 depending on the index
 * @n: binary
 * @index: where to chnage the the '0'
 * Return:changed binary
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
