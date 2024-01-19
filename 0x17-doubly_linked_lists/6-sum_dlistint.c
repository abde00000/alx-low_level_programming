#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *		of a dlistint_t linked list.
 * @head: the head of the linked list
 * Return: the sum of all the data (n) or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
