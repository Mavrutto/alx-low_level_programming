#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - printing all the elemts
 * @h:name of list_h
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t node_countingg = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
node_countingg++;
}
return (node_countingg);
}
