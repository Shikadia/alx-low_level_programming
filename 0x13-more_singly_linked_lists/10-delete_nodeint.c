#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * @head: Pointer to the head node of the list
 * @index: The index of the node that should be deleted
 *
 * Return: returns (1) on suucess and (-1) on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	if (!*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		if (*head)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else
			return (-1);
	}
	i = 0;
	while (current)
	{
		if (i == index)
		{
			temp->next = current->next;
			free(current);
			return (1);
		}
		else
		{
			i++;
			temp = current;
			current = current->next;
		}
	}
	return (-1);
}
