#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: the linked list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	if (head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
