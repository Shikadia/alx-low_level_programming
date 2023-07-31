#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data  of a linked list
 * @head: Pointer to the head node of the linked list
 *
 * Return: returns the sum on success
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;
	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
