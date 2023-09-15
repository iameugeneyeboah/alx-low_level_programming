#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in a linked list
 * @head: pointer to the head of a linked list
 * @index: location of the node
 * Return: address of the node if it exists, or NULL if it doesnt
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
