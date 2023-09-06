#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a duplicate data
 * @str: pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr;

	int m, n = 0;



	if (str == NULL)

		return (NULL);

	m = 0;

	while (str[m] != '\0')

		m++;



	ptr = malloc(sizeof(char) * (m + 1));



	if (ptr == NULL)

		return (NULL);



	for (n = 0; str[n]; n++)

		ptr[n] = str[n];



	return (ptr);

}
