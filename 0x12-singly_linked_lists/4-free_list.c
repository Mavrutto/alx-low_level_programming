#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - function that frees a list
 * @head: first node
 * Return: void
 */
void free_list(list_t *head)
{
list_t *last;
while (head)
{
last = head->next;
free(head->str);
free(head);
head = last;
}
}
