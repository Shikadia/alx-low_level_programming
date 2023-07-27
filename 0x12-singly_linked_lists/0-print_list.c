#include "lists.h"

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Return: returns number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *temp;

	if (!h)
		return (nodes);
	temp = h;
	while (temp)
	{
		if (!(temp->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		nodes++;
		temp = temp->next;
	}
	return (nodes);
}
