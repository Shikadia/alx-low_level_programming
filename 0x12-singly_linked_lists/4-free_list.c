#include "lists.h"

/**
 * free_list - This function frees the list_t list
 * @head: A pointer to the first node of the list_t list
 *
 * Return: returns void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
