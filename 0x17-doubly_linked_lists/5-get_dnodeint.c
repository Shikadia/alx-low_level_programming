#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list
 * @head: The head of the dlistint_t list
 * @index: The node to locate
 *
 * Return: If the node does not exist returns NULL
 *         On SUCCESS, returns the address of the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == 0)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
