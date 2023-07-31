#include "lists.h"

/**
  * print_listint - This function prints all the elements in a list
  * @h: Pointer to the head of the list
  *
  * Return: returns the number og nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t elements;
	const listint_t *temp;

	elements = 0;
	if (!h)
		return (elements);
	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		elements++;
	}
	return (elements);
}
