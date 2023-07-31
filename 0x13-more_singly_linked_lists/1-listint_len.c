#include "lists.h"

/**
  * listint_len - computes the number of emlement in the list
  * @h: Pointer to the head of the list
  *
  * Return: returs the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t elements;
	const listint_t *temp;

	elements = 0;
	if (!h)
		return (elements);
	temp = h;
	while (temp)
	{
		temp = temp->next;
		elements++;
	}
	return (elements);
}
