#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: Pointer to the head node
 * @n: The element to be added
 *
 * Return: returns the updated node on success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
