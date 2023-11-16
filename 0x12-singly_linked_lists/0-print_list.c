#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a linked list
 * @h: parmeter pointer to the list_t
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
