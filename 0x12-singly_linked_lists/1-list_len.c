#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: head file
 * Return: no of element
 */
size_t list_len(const list_t *h)
{
size_t counttt = 0;
while(h != NULL)
{
	counttt++;
	h = h->next;
}
return (counttt);
}
