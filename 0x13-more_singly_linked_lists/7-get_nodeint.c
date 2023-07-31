#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list if exist
 * @head: Pointer to the head node of the linked list
 * @index: The index of the node of the required
 *
 * Return: returns the node at specifi index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *nthNode;

	if (!head)
		return (NULL);
	nthNode = head;
	count = 0;
	while (nthNode)
	{
		if (count == index)
			return (nthNode);
		count++;
		nthNode = nthNode->next;
	}
	return (NULL);
}
