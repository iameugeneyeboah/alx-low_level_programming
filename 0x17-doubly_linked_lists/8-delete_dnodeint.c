#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: pointer to the head of a linked list
 * @index: given position to delete
 * Return: on sucess 1, on failure - 1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fornow = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (fornow == NULL)
			return (-1);
		fornow = fornow->next;
	}

	if (fornow == *head)
	{
		*head = fornow->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		fornow->prev->next = fornow->next;
		if (fornow->next != NULL)
			fornow->next->prev = fornow->prev;
	}

	free(fornow);
	return (1);
}
