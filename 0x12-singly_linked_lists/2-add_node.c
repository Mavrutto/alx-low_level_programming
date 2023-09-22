#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_node - adding a new node at the beginning of the list
 * @str: malloced pointer
 * @head: pointer
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *neww_node;
if (str == NULL)
	return (NULL);
neww_node = malloc(sizeof(list_t));

if (neww_node == NULL)
	return (NULL);
neww_node->str = strdup(str);
if (neww_node->str == NULL)
{
	free(neww_node);
	return (NULL);
}
neww_node->next = *head;
*head = neww_node;
return (neww_node);
}
