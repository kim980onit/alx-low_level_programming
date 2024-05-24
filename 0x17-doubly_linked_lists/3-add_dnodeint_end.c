#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the dlistint_t list
 *
 * @head: parmeter of the head of the list
 * @n: parmeter for element value
 * Return:address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *nn;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	nn = *head;

	if (nn != NULL)
	{
		while (nn->next != NULL)
			nn = nn->next;
		nn->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = nn;

	return (new);
}
