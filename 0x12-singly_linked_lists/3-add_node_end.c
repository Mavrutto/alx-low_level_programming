#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_node_end - new node at the end
 * @head: 1st node
 * @str: data of head
 * Return: address of new elementt~
 */
list_t *add_node_end(list_t **head, const char *str)
{
{
list_t *new;
list_t *last = *head;
unsigned int length = 0;

while (str[length])
length++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = length;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (last->next)
last = last->next;

last->next = new;

return (new);
}
}
