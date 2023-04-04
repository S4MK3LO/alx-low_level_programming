#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: head of the list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *the_node, *temp;
the_node = malloc(sizeof(listint_t));
/*or NULL if it failed*/
while (the_node == NULL)
return (NULL);
the_node->n = n;
the_node->next = NULL;
}
{
if (*head == NULL)

*head = the_node;
return (new_node);
}
