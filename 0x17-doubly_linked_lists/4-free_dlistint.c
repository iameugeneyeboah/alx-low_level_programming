#include "lists.h"

/**
 * free_dlistint - frees memory of a linked list
 * @head: pointer to the head of a linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *fornow;

	while (head != NULL)
	{
		fornow = head->next;
		free(head);
		head = fornow;
	}
}
