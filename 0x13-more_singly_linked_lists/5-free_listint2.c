#include "lists.h"

/**
 * free_listint2 - This function frees the list
 * @head: A pointer to the hed node of the list
 *
 * Return: returns void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
