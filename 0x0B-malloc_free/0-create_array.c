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

	char *ptr;

	unsigned int n;



	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)

		return (NULL);



	for (n = 0; n < size; n++)

		ptr[n] = c;

	return (ptr);

}

