#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@str: pointer to a string
 *@head: head pointer of lists
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_dup;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
