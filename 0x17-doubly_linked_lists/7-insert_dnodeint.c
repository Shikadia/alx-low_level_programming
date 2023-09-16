#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a position in a dlistint_t
 * @h: A pointer to the first node of the dlistint_t list
 * @idx: The position to insert the new node
 * @n: The integer to assign to the new node
 *
 * Return: If the function FAILS returns NULL
 *         On SUCCESS, returns the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == 0)
			return (NULL);
		idx--;
	}
	if (tmp->next == 0)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
