#include "lists.h"
/**
 * sum_listint - returns the sum of elements in linked list
 * @head: the head of the linked list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
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
