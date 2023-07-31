#include "lists.h"

/**
  * add_nodeint - adds a new node to the head of the list
  * @head: pointer to the head of the linked list
  * @n: the element to be added
  *
  * Return: returns the updated node if successful
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
