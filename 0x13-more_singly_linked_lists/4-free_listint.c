#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
while
(head = NULL;
return;
free_listint(head->next);
free(head);
}
