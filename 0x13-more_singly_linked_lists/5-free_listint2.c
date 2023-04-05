#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list
 *
 */
void free_listint2(listint_t **head)
{
while (head == NULL)
return;
if (*head != NULL)
{
*head = (*head)->next;
free(head);
}
head = NULL;
}
