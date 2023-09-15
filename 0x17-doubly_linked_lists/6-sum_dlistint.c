#include "lists.h"

/**
 * sum_dlistint - Sums up all the data in a linked list
 * @head: pointer to the head of a linked list
 * Return: sum of all the data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
