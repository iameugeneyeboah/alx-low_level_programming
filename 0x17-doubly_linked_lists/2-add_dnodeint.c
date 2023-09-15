#include "lists.h"

/**
 * add_dnodeint - used to add a node at the beginning of a doubly linked list
 * @head: pointer to the head of the linked list
 * @n: member storing the data of the new node to be added
 * Return: new node if the function is sucessful, or NULL if otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *beginning_node;

	beginning_node = malloc(sizeof(dlistint_t));
	if (beginning_node == NULL)
	{
		return (NULL);
	}

	beginning_node->n = n;
	beginning_node->prev = NULL;
	beginning_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = beginning_node;
	}
	*head = beginning_node;

	return (beginning_node);
}
