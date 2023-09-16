#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the first node of the dlistint_t list
 * @n: The integer to assign to the new node inserted at the end of the list
 *
 * Return: If the function FAILS returns NULL
 *         On SUCCESS returns (end) ie the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *tmp;

	end = malloc(sizeof(dlistint_t));
	if (end == 0)
		return (NULL);

	end->n = n;
	end->next = NULL;

	if (*head == 0)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}

	tmp = *head;
	while (tmp->next != 0)
		tmp = tmp->next;
	tmp->next = end;
	end->prev = tmp;
	return (end);
}
