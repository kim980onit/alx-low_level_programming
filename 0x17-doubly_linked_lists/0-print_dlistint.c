#include "lists.h"

/**
 * print_dlistints - prints all the elements of the dlistint_t list
 * @h: parmeter for the head of the list
 * Return: number of nodes
 */
size_t print_dlistints(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
