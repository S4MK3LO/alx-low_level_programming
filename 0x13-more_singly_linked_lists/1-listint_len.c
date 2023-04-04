#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h:
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t num;
for
(num = 0;
h != NULL;
num++);
{
h = h->next;
}
return (num);
}
