#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the first node of the listint_t list.
 *
 * Return: Returns (nodes) i.e the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count;
	const listint_t *ptr;

	count = 0;
	ptr = head;
	if (!head)
		return (count);
	while (ptr)
	{
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		count++;
		if (ptr->next && ((void *) ptr->next < (void *) ptr))
			ptr = ptr->next;
		else
			break;
	}
	if (ptr->next)
		printf("-> [%p] %d\n", (void *) ptr->next, (ptr->next)->n);
	return (count);
}
