#include "lists.h"

/**
 * print_listint - print all the elements of the list
 * @h: head pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
size_t no_nodes = 0;
/*while instead of for*/
while (h != NULL)
{
printf("%d\n", h->n);
no_nodes++;
h = h->next;
}
return (no_nodes);
}
