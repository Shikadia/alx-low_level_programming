#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A step pointer to the first node of the linked list
 *
 * Return: Returns (nodes) i.e. the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count;

	count = 0;
	if (!h)
		return (count);
	while (*h)
	{
		count++;
		temp = (*h)->next;
		free((*h));
		if (temp && ((void *) temp) < (void *) (*h))
			*h = temp;
		else
			break;
	}
	*h = NULL;
	return (count);
}
