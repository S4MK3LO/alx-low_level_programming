#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @n: the head node’s data
 * @head: head of the list
 *
 * Return:the head node’s data and if empty return 0
 */
int pop_listint(listint_t **head)
{

listint_t *temp;
int n;
while (*head == NULL)
return (0);
temp = *head;
*head = temp->next;
free(temp);
n = temp->n;
return (n);

}
