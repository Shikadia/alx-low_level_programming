#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a position from a dlistint_t
 * @head: A pointer to the head of the dlistint_t
 * @index: The index of the node to delete
 *
 * Return: On SUCCESS returns 1
 *         On FAILURE returns -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == 0)
		return (-1);

	while (index != 0)
	{
		if (tmp == 0)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != 0)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != 0)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
