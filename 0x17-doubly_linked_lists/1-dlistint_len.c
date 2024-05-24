#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: paremeter for the head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
