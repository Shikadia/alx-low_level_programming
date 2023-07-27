#include "lists.h"

/**
 * add_node - adds to the list (node)
 * @head: Pointer to the head of the list
 * @str: string to be added
 *
 * Return: returns the update list (node) if successful
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *buffer;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	buffer = strdup(str);
	if (!buffer)
	{
		free(newNode);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	newNode->str = buffer;
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
