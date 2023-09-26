#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head of the list
 * @str: source to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return NULL;

	new->str = strdup(str);
	new->len = len
	new->next = *head;

	*head = new;

	return (*head);
}
