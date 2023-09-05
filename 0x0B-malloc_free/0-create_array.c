#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars and initalizes it
 * @c:char
 * @size:var
 * Return:0 if null
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *ptr;

ptr = malloc(sizeof(char) * size);

if (size == 0)
	return (NULL);

for (n = 0; n < size; n++)
	printf("%s\n", ptr);

ptr[n] = c;

return (ptr);
}
