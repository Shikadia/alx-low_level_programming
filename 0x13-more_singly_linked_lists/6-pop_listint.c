#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: A pointer to the head node of the list
 *
 * Return: returns the poped value on success
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped;

	if (!*head)
		return (0);

	temp = (*head)->next;
	popped = (*head)->n;
	free(*head);
	*head = temp;

	return (popped);
}
