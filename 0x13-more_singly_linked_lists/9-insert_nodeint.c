#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to thehead node of the linked list
 * @idx: The index for value to be placed at
 * @n: Integer
 *
 * Return: returns update node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int index;

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	index = 1;
	while (temp)
	{
		if (index == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		index++;
	}
	free(newNode);
	return (NULL);
}
