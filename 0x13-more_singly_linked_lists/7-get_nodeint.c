#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node of a listint_t, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int len = 0, i;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	current = head;
	if (head == NULL || index >= len)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
