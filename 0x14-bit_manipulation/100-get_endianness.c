#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_endianness - checks the endianess..
 * Return: 0 if big endian or 1 if little endiann
 */
int get_endianness(void)
{
unsigned int numb = 1;
unsigned char *byte = (unsigned char *)&numb;
return ((int)*byte);
}
