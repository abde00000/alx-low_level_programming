#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the linked list
 * @index: the index
 * Return: the nth node of a dlistint_t linked list.
 * or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (current == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
