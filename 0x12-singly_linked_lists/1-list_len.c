#include "lists.h"

/**
 * list_len - gets the number of element in a list.
 * @h: Pointer to the head of the list
 *
 * Return: returns number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	if (!h)
		return (count);
	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
