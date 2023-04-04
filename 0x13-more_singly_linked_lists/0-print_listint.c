#include "lists.h"
#include <stddef.h>

/**
 * print_listint - print all the elements of the list
 * @h: head pointer to the first node of the list
 * all the integers
 *
 * Return: the number of nodes in the list (no_nodes)
 */

size_t print_listint(const listint_t *h);
{
size_t no_node = 0;
while (h != NULL)
}
printf("%d\n", h->n);
h = h->next;
no_node++;
}
return (no_node);
}
