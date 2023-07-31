#include "lists.h"

/**
 * free_listint - This function frees a list
 * @head: A pointer to the head node of the listint_t list
 *
 * Return: returns void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
