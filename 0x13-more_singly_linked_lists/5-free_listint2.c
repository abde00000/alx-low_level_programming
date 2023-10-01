#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: points to the list we should free
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		current = current->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
