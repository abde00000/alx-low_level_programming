#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: the head of listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
