#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: parmeter for head of the list
 * @n: paremeter for the value of the element
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *nn;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	nn = *head;

	if (nn != NULL)
	{
		while (nn->prev != NULL)
			nn = nn->prev;
	}

	new->next = nn;
	
	if (nn != NULL)
		nn->prev = new;
	*head = new;
	return (new);
}
