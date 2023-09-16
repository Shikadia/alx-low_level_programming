#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the first node of the dlistint_t list
 * @n: The integer to assign to the new node
 *
 * Return: If the function fails returns NULL
 *         On SUCCESS returns the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != 0)
		(*head)->prev = new;
	*head = new;
	return (new);
}
