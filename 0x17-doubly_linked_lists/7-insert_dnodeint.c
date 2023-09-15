#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to the head of the linked list
 * @idx: given position to insert new node
 * @n: member containing data for the new node
 * Return: address of the new node if sucessful or NULL if function fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *fornow = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		fornow = fornow->next;
		if (fornow == NULL)
			return (NULL);
	}

	if (fornow->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = fornow;
	new->next = fornow->next;
	fornow->next->prev = new;
	fornow->next = new;

	return (new);
}
