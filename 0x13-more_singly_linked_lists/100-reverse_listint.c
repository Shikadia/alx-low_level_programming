#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: pointer to the head node of the list
 *
 * Return: returns pointer to the node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *buffer, *previous;

	previous = NULL;
	while (*head)
	{
		buffer = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = buffer;
	}
	*head = previous;
	return (*head);
}
