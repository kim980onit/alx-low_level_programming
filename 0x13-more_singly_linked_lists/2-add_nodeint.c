#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning of a linked list
* @head: firstparameter
* @n: secondparameter for data to insert in that new node
*
* Return: pointer, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

