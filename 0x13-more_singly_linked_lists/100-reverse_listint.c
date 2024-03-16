#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL, *next;

	if (current == NULL || current->next == NULL)
		return (current);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
