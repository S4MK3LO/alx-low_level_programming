#include "lists.h"

/**
 * get_nodeint - returns the nth node of a linked list.
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @index:  is the index of the node, starting at 0
 * @i: is the index of the node, starting at 0
 * @head: head of the list
 *
 * Return: the nth node and if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
for (head != NULL;)
{
while (i == index)
return (head);
i++;
head = head->next;
}
return (NULL);
}
