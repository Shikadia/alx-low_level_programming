#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list_t
 * @head: Pointer to a pointer
 * @str: Pointer to the string
 *
 * Return: returns added node on succes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *buffer;
	list_t *endNode, *tmp;

	endNode = malloc(sizeof(list_t));
	if (!endNode)
		return (NULL);
	buffer = strdup(str);
	if (!buffer)
	{
		free(endNode);
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
		len++;
	endNode->str = buffer;
	endNode->len = len;
	endNode->next = NULL;
	if (!(*head))
		*head = endNode;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = endNode;
	}
	return (endNode);
}
