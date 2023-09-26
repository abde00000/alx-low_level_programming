#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds new node to the end of lists_t list
 * @head : the head of the list
 * @str: the source to be dupliacted from
 * Return: the adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current->next = current;
		}
		current->next = new;
	}
	return (new);
}
